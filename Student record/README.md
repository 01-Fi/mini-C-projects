# Student Record 

## Description
A menu-driven student record system written in C that stores
student data permanently using file handling. The program
uses structure pointers to read and write student records
to a file.

## Concepts Used
- Structures
- Pointers
- File handling (binary files)
- Functions
- switch-case
- Loops

## Features
- Add student records
- Display all stored records
- Data is saved in a file (`students.dat`)

## How to Compile and Run
```bash
gcc student_record.c -o student_record
./student_record

##Sample output
Student Record System
1. Add Student
2. Display Students
0. Exit
Enter choice: 1
Enter Roll Number: 10
Enter Name: lala
Enter Marks: 45
Student record added successfully.

Student Record System
1. Add Student
2. Display Students
0. Exit
Enter choice: 2

Roll    Name    Marks
10      lala    45

Student Record System
1. Add Student
2. Display Students
0. Exit
Enter choice: 0
Exiting program.
