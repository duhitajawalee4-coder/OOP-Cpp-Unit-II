#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream inputFile("message.txt");

    if (!inputFile) {
        std::ofstream createFile("message.txt");

        if (!createFile) {
            std::cerr << "Error: Could not create message.txt\n";
            return 1;
        }

        createFile << "Welcome to C++ File Handling\n";
        createFile << "This is a sample file for word searching.\n";
        createFile.close();

        inputFile.open("message.txt");
    }

    if (!inputFile) {
        std::cerr << "Error: Could not open message.txt\n";
        return 1;
    }

    std::string searchWord;

    std::cout << "Enter word to search: ";
    std::cin >> searchWord;

    std::string word;
    int count = 0;

    while (inputFile >> word) {
        if (word == searchWord) {
            ++count;
        }
    }

    std::cout << "The word '" << searchWord
              << "' occurred " << count << " time(s).\n";

    inputFile.close();

    return 0;
}