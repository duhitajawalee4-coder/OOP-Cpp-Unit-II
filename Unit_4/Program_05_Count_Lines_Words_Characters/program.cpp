#include <cctype>
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream inputFile("message.txt");

    // Create the file if it does not exist
    if (!inputFile) {
        std::ofstream createFile("message.txt");

        if (!createFile) {
            std::cerr << "Error: Could not create message.txt\n";
            return 1;
        }

        createFile << "Welcome to C++ File Handling\n";
        createFile << "This is the first line written to a file.\n";
        createFile << "Files store data permanently.\n";

        createFile.close();

        // Open the file again for reading
        inputFile.open("message.txt");
    }

    if (!inputFile) {
        std::cerr << "Error: Could not open message.txt\n";
        return 1;
    }

    std::size_t lineCount = 0;
    std::size_t wordCount = 0;
    std::size_t characterCount = 0;

    bool insideWord = false;
    char ch;

    while (inputFile.get(ch)) {
        ++characterCount;

        if (ch == '\n')
            ++lineCount;

        if (std::isspace(static_cast<unsigned char>(ch))) {
            insideWord = false;
        }
        else if (!insideWord) {
            ++wordCount;
            insideWord = true;
        }
    }

    if (characterCount > 0) {
        inputFile.clear();
        inputFile.seekg(-1, std::ios::end);

        char lastCharacter;
        inputFile.get(lastCharacter);

        if (lastCharacter != '\n')
            ++lineCount;
    }

    std::cout << "Lines: " << lineCount << '\n';
    std::cout << "Words: " << wordCount << '\n';
    std::cout << "Characters: " << characterCount << '\n';

    inputFile.close();

    return 0;
}