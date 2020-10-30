#include <iostream>
#include "dictionary.hpp"

int main() {
    int temp = 0;
    std::cout << "1 - Print Dictionary\n2 - Find word definition\n3 - Enter a new word and definition\n4 - Exit"<< std::endl;
    while (true) {
        dictionary diction = dictionary();
        diction.readFromFile("dictionary.txt");
        std::cin >> temp;
        switch(temp) {
            case 1: {
                diction.print();
            }
            case 2: {
                std::string word;
                std::cout << "Please enter the word you'd like to search for: ";
                std::cin >> word;
                diction.printDefinition(word);
            }
            case 3: {

            }
            case 4: {
                return 0;
            }

        }
    }

    return 0;
}
