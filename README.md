# Student Record Management System in C++

A simple C++ console application for managing student records. This program allows users to add, search, display, and delete student information using a menu-driven interface.

## Features

- Add new student records
- Search for a student by ID or full name
- Display all student records
- Display a specific student record
- Delete a student record
- Prevent duplicate student IDs
- Validate user input
- Handle empty record lists
- Menu-driven console interface

## Student Information Stored

Each student record includes:

- Student ID
- Full Name
- Birthday
- Address
- Gender
- Degree Program
- Year Level

## Technologies Used

- C++
- C++ Standard Library
- Vector
- Console-based input and output

## Getting Started

### Prerequisites

Make sure you have a C++ compiler installed.

Example:

```bash
g++
```

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
g++ student_record_system.cpp -o student_records
```

4. Run the program:

For Windows PowerShell:

```bash
.\student_records.exe
```

For macOS or Linux:

```bash
./student_records
```

## Sample Output

![Sample Output](assets/sample-output.png)

![Sample Output 2](assets/sample-output2.png)

![Sample Output 3](assets/sample-output3.png)

## How It Works

After running the program, the user can choose from the menu options to add, search, display, or delete student records.

The program stores records temporarily while it is running. Once the program is closed, the records are not saved permanently.

## Project Structure

```text
Student-Record-Management-System-in-C-
│
├── assets
│   ├── sample-output.png
│   ├── sample-output2.png
│   └── sample-output3.png
├── student_record_system.cpp
├── README.md
└── .gitignore
```

## Future Improvements

- Add file handling to save and load student records
- Add an option to update existing student records
- Add sorting by student ID or name
- Add case-insensitive search
- Improve the user interface
- Organize the program using classes

## License

This project is for educational and portfolio purposes only. All rights are reserved.

You may view the source code, but you may not copy, modify, distribute, or use this code without permission from the author.

## Author

Created by Tim Nieto.
