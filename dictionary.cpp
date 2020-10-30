//
// Created by FOX2 on 10/29/2020.
//





#include "dictionary.hpp"

int dictionary::readFromFile(std::string fileName) {
    std::fstream file{fileName};
    currentFile = fileName;
    int lineNumber = 1;
    if (!file) {
        std::cerr << "No such file" << std::endl;
        return -1;
    } else {
        std::string temp;
        while (std::getline(file, temp)) {
            int index = 0;
            std::string word;
            std::string definition;
            try {
                while (word.empty() && index < temp.size()) {
                    if (temp.at(index) == '/') {
                        if (temp.at(index + 1) == '/') {
                            word = temp.substr(0, index);
                            index += 1;
                        }
                    }
                    index++;
                }
            } catch (std::exception& e) {
                std::cout << "Malformed entry at line " << lineNumber << std::endl;
            }
            std::transform(word.begin(), word.end(), word.begin(), ::tolower);
            definition = temp.substr(index, temp.size());
            if (definition.size() > 0 && word.size() > 0) {
                definitions.insert(std::make_pair(word, definition));
            } else {
                std::cout << "Malformed entry at line " << lineNumber << std::endl;
            }
            lineNumber++;
        }
    }
    return 1;
}

void dictionary::printDefinition(std::string word) {
    std::string key = word;
    std::transform(key.begin(), key.end(), key.begin(), ::tolower);
    std::map<std::string, std::string>::iterator pair = definitions.find(key);
    if (pair != definitions.end()) {
        std::cout << pair->second << std::endl;
    } else {
        std::cout << "the word doesn't exist";
    }
}
void dictionary::print() {
    for(auto word : definitions)
    {
        std::cout << word.first << " " << word.second << std::endl;
    }
}