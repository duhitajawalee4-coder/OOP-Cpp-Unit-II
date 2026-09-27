# C++ Programming Project – OOPs

## Student Details

- **Student Name:** Duhita Ramesh Jawale
- **Roll Number:** AD2224
- **PRN:** 125UAD1274
- **Class/Division:** SY/B
- **Course Name:** OOPs

## About the Project

This repository contains C++ programs completed as part of the Object-Oriented Programming (OOPs) course. The programs cover concepts from Unit 1 to Unit 4, including basic C++ programming, inheritance, polymorphism, operator overloading, and file handling.

Each program is organized in a separate folder with its source code and output screenshot. Supporting text and binary files are also included wherever required by the program.

## Unit 1 – C++ Programming Basics

### 1. Basic Data Types
Demonstrates the use of basic C++ data types such as `int`, `char`, and `float` to store student information.

### 2. If-Else
Demonstrates decision-making using an `if-else` statement to determine whether a student has passed or failed.

### 3. Loop and Array
Demonstrates how an array stores marks and how a `for` loop is used to display the marks of five students.

### 4. Functions
Demonstrates the creation and use of a function to perform addition of two numbers.

### 5. Class and Object
Demonstrates the concept of a class and object by storing and displaying student details.

### 6. Constructor and Destructor
Demonstrates the use of a constructor and destructor and shows their execution during the object lifecycle.

### 7. Static Member
Demonstrates the use of a static data member to count the number of objects created from a class.

### 8. Inline and Friend Function
Demonstrates an inline function and a friend function to access and display private class data.

## Unit 2 – Inheritance and Related OOP Concepts

### 1. Basic Single Inheritance
Demonstrates single inheritance using `Person` as a base class and `Student` as a derived class.

### 2. Protected Member Access
Demonstrates how a derived class can access a protected member of its base class.

### 3. Public versus Private Inheritance
Demonstrates the effect of public and private inheritance on the accessibility of base-class members.

### 4. Multilevel Inheritance
Demonstrates multilevel inheritance using the hierarchy `Person → Employee → Manager`.

### 5. Hierarchical Inheritance
Demonstrates hierarchical inheritance using `Vehicle` as a common base class for `Car` and `Bike`.

### 6. Multiple Inheritance
Demonstrates multiple inheritance using `Academic` and `Sports` as base classes and `Student` as the derived class.

### 7. Resolving Multiple-Inheritance Ambiguity
Demonstrates how ambiguity between functions having the same name in multiple base classes can be resolved using the scope-resolution operator.

### 8. Constructor and Destructor Order
Demonstrates the order of execution of constructors and destructors in a derived object.

### 9. Parameterized Base Constructor
Demonstrates how a derived-class constructor initializes a parameterized base-class constructor.

### 10. Function Overriding
Demonstrates function overriding using virtual functions in a base class and derived classes.

### 11. Abstract Class
Demonstrates the use of an abstract class with a pure virtual function.

### 12. Virtual Base Class and Diamond Inheritance
Demonstrates the use of virtual inheritance to avoid duplicate copies of a base class in diamond inheritance.

### 13. Friend Class
Demonstrates how a friend class can access private data members of another class.

### 14. Nested Class
Demonstrates the creation and use of a class defined inside another class.

### 15. Mini-Project – Vehicle Rental System
Demonstrates an inheritance-based vehicle rental application using vehicles, rental rates, and function overriding.

### 16. Mini-Project – Employee Payroll System
Demonstrates an employee salary system using abstract classes, inheritance, function overriding, and polymorphism.

## Unit 3 – Polymorphism and Operator Overloading

### 1. Function Overloading
Demonstrates compile-time polymorphism using multiple functions with the same name but different parameters.

### 2. Area Calculator
Demonstrates function overloading to calculate the area of different geometric shapes.

### 3. Unary Minus Operator
Demonstrates operator overloading of the unary minus operator.

### 4. Prefix and Postfix Increment
Demonstrates overloading of prefix and postfix increment operators.

### 5. Complex Number Addition
Demonstrates operator overloading to add two complex numbers.

### 6. Distance Comparison
Demonstrates operator overloading to compare two distance objects.

### 7. Friend Operator
Demonstrates the use of a friend function for operator overloading.

### 8. Base Pointer Without Virtual Function
Demonstrates the behavior of a base-class pointer when a virtual function is not used.

### 9. Base Pointer With Virtual Function
Demonstrates runtime polymorphism using a base-class pointer and virtual functions.

### 10. Base Reference With Virtual Function
Demonstrates runtime polymorphism using a base-class reference and virtual functions.

### 11. Abstract Class
Demonstrates the use of an abstract class with pure virtual functions.

### 12. Polymorphic Shape Pointers
Demonstrates runtime polymorphism using pointers to different shape objects.

### 13. Virtual Destructor
Demonstrates the importance of a virtual destructor when deleting derived objects through base-class pointers.

### 14. Object Slicing
Demonstrates object slicing when a derived-class object is assigned to a base-class object.

### 15. Mini-Project – Payment System
Demonstrates polymorphism using different payment methods and virtual functions.

### 16. Mini-Project – Payroll System
Demonstrates a payroll system using inheritance, polymorphism, and virtual functions.

## Unit 4 – File Handling

### 1. Write Text to File
Demonstrates writing text data into a file using file streams.

### 2. Read File Line by Line
Demonstrates reading and displaying file contents line by line.

### 3. Append Data to File
Demonstrates adding new data to an existing file using append mode.

### 4. Copy File
Demonstrates copying the contents of one text file into another file.

### 5. Count Lines, Words and Characters
Demonstrates counting lines, words, and characters stored in a text file.

### 6. Search Word in File
Demonstrates searching for a specific word and counting its occurrences in a file.

### 7. Store Student Records
Demonstrates storing student records in a text file.

### 8. Read and Search Student Records
Demonstrates reading student records from a file and searching for a record using roll number.

### 9. Update Student Record
Demonstrates updating student marks stored in a file.

### 10. File Pointer Navigation
Demonstrates file pointer operations such as `seekg()`, `seekp()`, `tellg()`, and `tellp()`.

### 11. Binary File Record
Demonstrates storing and reading student records using binary file handling.

### 12. Random Access Binary File
Demonstrates accessing a specific record directly from a binary file.

### 13. File Error Handling
Demonstrates handling file-opening and file-reading errors using file stream status checks.

### 14. File Statistics
Demonstrates calculating file statistics such as lines, words, characters, vowels, digits, and spaces.

### 15. Mini-Project – Student Record Manager
Demonstrates adding, displaying, searching, and updating student records using file handling.

### 16. Mini-Project – Library Record Manager
Demonstrates managing library records using file handling and a menu-driven program.

## Repository Structure

```text
OOP_Programs
│
├── Unit_1
│   ├── Program_01_Basic_Data_Types
│   ├── Program_02_if_else
│   ├── Program_03_Loop_and_Array
│   ├── Program_04_Functions
│   ├── Program_05_Class_and_Object
│   ├── Program_06_Constructor_and_Destructor
│   ├── Program_07_Static_Member
│   └── Program_08_Inline_and_Friend_Function
│
├── Unit_2
│   ├── Program_01_Basic_Single_Inheritance
│   ├── Program_02_Protected_Member_Access
│   ├── Program_03_Public_vs_Private_Inheritance
│   ├── Program_04_Multilevel_Inheritance
│   ├── Program_05_Hierarchical_Inheritance
│   ├── Program_06_Multiple_Inheritance
│   ├── Program_07_Ambiguity_Resolution
│   ├── Program_08_Constructor_and_Destructor_Order
│   ├── Program_09_Parameterized_Base_Constructor
│   ├── Program_10_Function_Overriding
│   ├── Program_11_Abstract_Class
│   ├── Program_12_Virtual_Base_Class
│   ├── Program_13_Friend_Class
│   ├── Program_14_Nested_Class
│   ├── Program_15_Vehicle_Rental_System
│   └── Program_16_Employee_Payroll_System
│
├── Unit_3
│   ├── Program_01_Function_Overloading
│   ├── Program_02_Area_Calculator
│   ├── Program_03_Unary_Minus_Operator
│   ├── Program_04_Prefix_and_Postfix_Increment
│   ├── Program_05_Complex_Number_Addition
│   ├── Program_06_Distance_Comparison
│   ├── Program_07_Friend_Operator
│   ├── Program_08_Base_Pointer_Without_Virtual
│   ├── Program_09_Base_Pointer_With_Virtual
│   ├── Program_10_Base_Reference_With_Virtual
│   ├── Program_11_Abstract_Class
│   ├── Program_12_Polymorphic_Shape_Pointers
│   ├── Program_13_Virtual_Destructor
│   ├── Program_14_Object_Slicing
│   ├── Program_15_Payment_System
│   └── Program_16_Payroll_Mini_Project
│
└── Unit_4
    ├── Program_01_Write_Text_to_File
    ├── Program_02_Read_File_Line_by_Line
    ├── Program_03_Append_Data_to_File
    ├── Program_04_Copy_File
    ├── Program_05_Count_Lines_Words_Characters
    ├── Program_06_Search_Word_in_File
    ├── Program_07_Store_Student_Records
    ├── Program_08_Read_and_Search_Student_Records
    ├── Program_09_Update_Record
    ├── Program_10_File_Pointer_Navigation
    ├── Program_11_Binary_File_Record
    ├── Program_12_Random_Access_Binary_File
    ├── Program_13_File_Error_Handling
    ├── Program_14_File_Statistics
    ├── Program_15_Student_Record_Manager
    └── Program_16_Library_Record_Manager