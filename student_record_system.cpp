#include <cctype>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

struct Student {
    std::string id;
    std::string full_name;
    std::string birthday;
    std::string address;
    char gender;
    std::string program;
    int year;
};

std::vector<Student> student_records;

void clear_input() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

std::string get_required_input(const std::string& prompt) {
    std::string input;

    do {
        std::cout << prompt;
        std::getline(std::cin, input);

        if (input.empty()) {
            std::cout << "Input cannot be empty. Please try again.\n";
        }
    } while (input.empty());

    return input;
}

bool student_id_exists(const std::string& id) {
    for (const Student& student : student_records) {
        if (student.id == id) {
            return true;
        }
    }

    return false;
}

char get_valid_gender() {
    char gender;

    while (true) {
        std::cout << "Gender (M/F): ";
        std::cin >> gender;
        clear_input();

        gender = static_cast<char>(std::toupper(static_cast<unsigned char>(gender)));

        if (gender == 'M' || gender == 'F') {
            return gender;
        }

        std::cout << "Invalid gender. Please enter M or F.\n";
    }
}

int get_valid_year_level() {
    int year;

    while (true) {
        std::cout << "Year Level (1-5): ";
        std::cin >> year;

        if (!std::cin.fail() && year >= 1 && year <= 5) {
            clear_input();
            return year;
        }

        std::cout << "Invalid year level. Please enter a number from 1 to 5.\n";
        clear_input();
    }
}

int get_menu_choice() {
    int choice;

    while (true) {
        std::cout << "Please type your selection: ";
        std::cin >> choice;

        if (!std::cin.fail() && choice >= 1 && choice <= 6) {
            clear_input();
            return choice;
        }

        std::cout << "Invalid option. Please enter a number from 1 to 6.\n";
        clear_input();
    }
}

void display_menu() {
    std::cout << "\nWhat do you want to do?\n";
    std::cout << "1. Add New Record\n";
    std::cout << "2. Search Record\n";
    std::cout << "3. Display All Records\n";
    std::cout << "4. Display Specific Record\n";
    std::cout << "5. Delete Record\n";
    std::cout << "6. Exit\n";
}

void display_student(const Student& student) {
    std::cout << "\nRecord:\n";
    std::cout << "Student ID Number: " << student.id << '\n';
    std::cout << "Full Name: " << student.full_name << '\n';
    std::cout << "Birthday: " << student.birthday << '\n';
    std::cout << "Address: " << student.address << '\n';
    std::cout << "Gender: " << student.gender << '\n';
    std::cout << "Degree Program: " << student.program << '\n';
    std::cout << "Year Level: " << student.year << '\n';
}

std::vector<Student>::iterator find_student(const std::string& search_text) {
    for (auto student = student_records.begin(); student != student_records.end(); ++student) {
        if (student->id == search_text || student->full_name == search_text) {
            return student;
        }
    }

    return student_records.end();
}

void add_record() {
    Student new_student;

    std::cout << "\nAdding New Record\n";

    while (true) {
        new_student.id = get_required_input("Student ID: ");

        if (!student_id_exists(new_student.id)) {
            break;
        }

        std::cout << "Student ID already exists. Please enter a different ID.\n";
    }

    new_student.full_name = get_required_input("Full Name: ");
    new_student.birthday = get_required_input("Birthday (MM/DD/YYYY): ");
    new_student.address = get_required_input("Full Address: ");
    new_student.gender = get_valid_gender();
    new_student.program = get_required_input("Degree Program: ");
    new_student.year = get_valid_year_level();

    student_records.push_back(new_student);

    std::cout << "\nRecord added successfully.\n";
}

void search_record() {
    if (student_records.empty()) {
        std::cout << "\nNo student records found.\n";
        return;
    }

    std::string search_text = get_required_input("Enter student ID or full name: ");
    auto student = find_student(search_text);

    if (student == student_records.end()) {
        std::cout << "\nRecord does not exist.\n";
        return;
    }

    std::cout << "\nRecord found:\n";
    display_student(*student);
}

void display_all_records() {
    if (student_records.empty()) {
        std::cout << "\nNo student records found.\n";
        return;
    }

    std::cout << "\nDisplaying All Records:\n";

    for (const Student& student : student_records) {
        display_student(student);
    }
}

void display_specific_record() {
    search_record();
}

void delete_record() {
    if (student_records.empty()) {
        std::cout << "\nNo student records found.\n";
        return;
    }

    std::string search_text = get_required_input("Enter student ID or full name to delete: ");
    auto student = find_student(search_text);

    if (student == student_records.end()) {
        std::cout << "\nRecord does not exist.\n";
        return;
    }

    student_records.erase(student);

    std::cout << "\nRecord deleted successfully.\n";
}

int main() {
    int choice;

    do {
        display_menu();
        choice = get_menu_choice();

        switch (choice) {
            case 1:
                add_record();
                break;
            case 2:
                search_record();
                break;
            case 3:
                display_all_records();
                break;
            case 4:
                display_specific_record();
                break;
            case 5:
                delete_record();
                break;
            case 6:
                std::cout << "\nExiting program...\n";
                break;
        }
    } while (choice != 6);

    return 0;
}