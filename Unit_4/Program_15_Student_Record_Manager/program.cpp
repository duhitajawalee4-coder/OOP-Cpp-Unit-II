#include <cstdio>
#include <fstream>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

void addStudent() {
    std::ofstream outputFile(
        "students.txt",
        std::ios::app
    );

    if (!outputFile) {
        std::cerr << "Error: Could not open students.txt\n";
        return;
    }

    int rollNumber;
    std::string name;
    double marks;

    std::cout << "Enter roll number: ";
    std::cin >> rollNumber;

    std::cout << "Enter name: ";

    std::cin.ignore(
        std::numeric_limits<std::streamsize>::max(),
        '\n'
    );

    std::getline(std::cin, name);

    std::cout << "Enter marks: ";
    std::cin >> marks;

    outputFile << rollNumber << '|'
               << name << '|'
               << marks << '\n';

    std::cout << "Student record added successfully.\n";
}

void displayStudents() {
    std::ifstream inputFile("students.txt");

    if (!inputFile) {
        std::cerr << "Error: Could not open students.txt\n";
        return;
    }

    std::string line;

    std::cout << "\nStudent Records\n";

    while (std::getline(inputFile, line)) {
        std::stringstream record(line);

        std::string rollText;
        std::string name;
        std::string marksText;

        if (std::getline(record, rollText, '|') &&
            std::getline(record, name, '|') &&
            std::getline(record, marksText)) {

            std::cout << "Roll Number: "
                      << rollText << '\n';

            std::cout << "Name: "
                      << name << '\n';

            std::cout << "Marks: "
                      << marksText << "\n\n";
        }
    }
}

void searchStudent() {
    std::ifstream inputFile("students.txt");

    if (!inputFile) {
        std::cerr << "Error: Could not open students.txt\n";
        return;
    }

    int targetRollNumber;

    std::cout << "Enter roll number to search: ";
    std::cin >> targetRollNumber;

    std::string line;
    bool found = false;

    while (std::getline(inputFile, line)) {
        std::stringstream record(line);

        std::string rollText;
        std::string name;
        std::string marksText;

        if (std::getline(record, rollText, '|') &&
            std::getline(record, name, '|') &&
            std::getline(record, marksText)) {

            int rollNumber = std::stoi(rollText);

            if (rollNumber == targetRollNumber) {
                std::cout << "Record Found\n";
                std::cout << "Roll Number: "
                          << rollNumber << '\n';
                std::cout << "Name: "
                          << name << '\n';
                std::cout << "Marks: "
                          << marksText << '\n';

                found = true;
                break;
            }
        }
    }

    if (!found)
        std::cout << "Student record not found.\n";
}

void updateMarks() {
    std::ifstream inputFile("students.txt");
    std::ofstream temporaryFile("students_temp.txt");

    if (!inputFile || !temporaryFile) {
        std::cerr << "Error: Could not open file(s).\n";
        return;
    }

    int targetRollNumber;
    double updatedMarks;

    std::cout << "Enter roll number to update: ";
    std::cin >> targetRollNumber;

    std::cout << "Enter updated marks: ";
    std::cin >> updatedMarks;

    std::string line;
    bool found = false;

    while (std::getline(inputFile, line)) {
        std::stringstream record(line);

        std::string rollText;
        std::string name;
        std::string marksText;

        if (std::getline(record, rollText, '|') &&
            std::getline(record, name, '|') &&
            std::getline(record, marksText)) {

            int rollNumber = std::stoi(rollText);

            if (rollNumber == targetRollNumber) {
                temporaryFile << rollNumber << '|'
                              << name << '|'
                              << updatedMarks << '\n';

                found = true;
            }
            else {
                temporaryFile << line << '\n';
            }
        }
    }

    inputFile.close();
    temporaryFile.close();

    if (!found) {
        std::remove("students_temp.txt");

        std::cout << "Student record not found. "
                     "No update performed.\n";
        return;
    }

    if (std::remove("students.txt") != 0) {
        std::cerr << "Error: Could not remove old students.txt\n";
        return;
    }

    if (std::rename(
            "students_temp.txt",
            "students.txt") != 0) {

        std::cerr << "Error: Could not rename temporary file.\n";
        return;
    }

    std::cout << "Student marks updated successfully.\n";
}

int main() {
    int choice;

    do {
        std::cout << "\n===== Student Record Manager =====\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Search Student\n";
        std::cout << "4. Update Marks\n";
        std::cout << "5. Exit\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
