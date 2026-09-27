#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

struct Book {
    int id;
    std::string title;
    std::string author;
};

void addBook(std::vector<Book>& books) {
    Book book;

    std::cout << "Enter book ID: ";
    std::cin >> book.id;

    std::cin.ignore();

    std::cout << "Enter book title: ";
    std::getline(std::cin, book.title);

    std::cout << "Enter author name: ";
    std::getline(std::cin, book.author);

    books.push_back(std::move(book));

    std::cout << "Book added successfully.\n";
}

void displayBooks(const std::vector<Book>& books) {
    if (books.empty()) {
        std::cout << "No books available.\n";
        return;
    }

    std::cout << "\nLibrary Records\n";

    for (const Book& book : books) {
        std::cout << "ID: " << book.id << '\n';
        std::cout << "Title: " << book.title << '\n';
        std::cout << "Author: " << book.author << "\n\n";
    }
}

void saveBooks(const std::vector<Book>& books) {
    std::ofstream outputFile("library.txt");

    if (!outputFile) {
        std::cerr << "Error: Could not open library.txt\n";
        return;
    }

    for (const Book& book : books) {
        outputFile << book.id << '|'
                   << book.title << '|'
                   << book.author << '\n';
    }

    std::cout << "Library records saved successfully.\n";
}

void loadBooks(std::vector<Book>& books) {
    std::ifstream inputFile("library.txt");

    if (!inputFile)
        return;

    std::string line;

    while (std::getline(inputFile, line)) {
        std::size_t firstSeparator = line.find('|');

        std::size_t secondSeparator = line.find(
            '|',
            firstSeparator + 1
        );

        if (firstSeparator == std::string::npos ||
            secondSeparator == std::string::npos) {
            continue;
        }

        Book book;

        book.id = std::stoi(
            line.substr(0, firstSeparator)
        );

        book.title = line.substr(
            firstSeparator + 1,
            secondSeparator - firstSeparator - 1
        );

        book.author = line.substr(
            secondSeparator + 1
        );

        books.push_back(std::move(book));
    }
}

int main() {
    std::vector<Book> books;

    loadBooks(books);

    int choice;

    do {
        std::cout << "\n===== Library Record Manager =====\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Display Books\n";
        std::cout << "3. Save Records\n";
        std::cout << "4. Exit\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addBook(books);
                break;

            case 2:
                displayBooks(books);
                break;

            case 3:
                saveBooks(books);
                break;

            case 4:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
