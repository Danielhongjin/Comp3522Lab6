//
// Created by FOX2 on 10/29/2020.
//

#ifndef COMP3522LAB6_DICTIONARY_HPP
#define COMP3522LAB6_DICTIONARY_HPP


#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>

class dictionary {
private:
    struct word_t {
        std::string word;
        std::string definition;
    };
    std::map<std::string, word_t> definitions;
    std::string currentFile;
public:
    dictionary() {};
    int readFromFile(std::string fileName);
    void printDefinition(std::string word);
    void print();
};


#endif //COMP3522LAB6_DICTIONARY_HPP
