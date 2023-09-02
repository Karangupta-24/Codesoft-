#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int countWordsInFile(const std::string &filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "File not found." << std::endl;
        return 0;
    }

    std::string line;
    int wordCount = 0;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            wordCount++;
        }
    }

    file.close();
    return wordCount;
}

int main() {
    std::string fileName;
    std::cout << "Enter the file name: ";
    std::cin >> fileName;

    int totalWords = countWordsInFile(fileName);

    std::cout << "Total number of words in '" << fileName << "': " << totalWords << std::endl;

    return 0;
}
