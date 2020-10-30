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
    std::map<std::string, std::string> definitions;
    std::string currentFile;
public:
    dictionary() {};
    int readFromFile(std::string fileName);
    void printDefinition(std::string word);
    void print();
};


#endif //COMP3522LAB6_DICTIONARY_HPP
