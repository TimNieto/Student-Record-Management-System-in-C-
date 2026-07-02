# Student Record Management System in C++

A simple C++ console application for managing student records. This program allows users to add, search, display, and delete student information using a menu-driven interface.

## Features

* Add new student records with:

  * Student ID
  * Full Name
  * Birthday
  * Address
  * Gender
  * Degree Program
  * Year Level
* Search for a student by ID or full name
* Display all student records
* Display a specific student record
* Delete a student record
* Simple menu-driven console interface

## Technologies Used

* C++
* C++ Standard Library
* Vector for storing student records
* Console-based input and output

## Getting Started

### Prerequisites

Make sure you have a C++ compiler installed.

For example, you can use:

* g++
* MinGW
* Visual Studio Code with a C++ compiler
* Code::Blocks
* Dev-C++

## Installation and Usage

1. Clone the repository:

```bash
git clone https://github.com/TimNieto/Student-Record-Management-System-in-C-.git
```

2. Go to the project folder:

```bash
cd Student-Record-Management-System-in-C-
```

3. Compile the program:

```bash
g++ NIETO_FinalExam.cpp -o student_records
```

4. Run the program:

For Windows:

```bash
student_records.exe
```

For macOS or Linux:

```bash
./student_records
```

## How It Works

After running the program, a menu will appear in the console. The user can choose from the available options to add, search, display, or delete student records.

The records are stored temporarily while the program is running. Once the program is closed, the records will not be saved permanently.

## Sample Menu

```text
STUDENT RECORD MANAGEMENT SYSTEM

1. Add Student Record
2. Search Student Record
3. Display All Records
4. Display Specific Record
5. Delete Student Record
6. Exit
```

## Project Structure

```text
Student-Record-Management-System-in-C-
│
├── NIETO_FinalExam.cpp
├── README.md
└── .gitignore
```

## Future Improvements

* Add file handling to save and load student records
* Add an option to update existing student records
* Prevent duplicate student IDs
* Improve input validation
* Add sorting by student ID or name
* Add case-insensitive search
* Improve code organization using separate functions or classes

## License

This project is currently not licensed. Add a license file if you want others to use, modify, or distribute the code.

## Author

Created by Tim Nieto.
