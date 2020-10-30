#include <iostream>
#include "dictionary.hpp"

int main() {
    int temp = 0;

    dictionary diction = dictionary();
    while (true) {
        std::cout << "1 - Print Dictionary\n2 - Find word definition\n3 - Enter a new word and definition\n4 - Exit"<< std::endl;
        diction.readFromFile("dictionary.txt");
        std::cin >> temp;
        switch(temp) {
            case 1: {
                diction.print();
                break;
            }
            case 2: {
                std::string word;
                std::cout << "Please enter the word you'd like to search for: " << std::endl;
                std::cin >> word;
                diction.printDefinition(word);
                break;
            }
            case 3: {
                std::string word;
                std::string definition;
                std::cout << "Please the word" << std::endl;
                std::cin >> word;
                std::cout << "Please the definition" << std::endl;
                std::cin >> definition;
                diction.addWord(word, definition);
                break;
            }
            case 4: {
                return 0;
                break;
            }

        }
    }

    return 0;
}
