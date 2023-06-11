#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::ifstream file("document.txt");
    std::string word;
    //Inicialize variables
    int lineCharCount = 0;
    int lineCount = 0;
    int pageCount = 0;
    
    //Getting start with the first page which is page '0'
    std::cout << "\nPage " << pageCount << std::endl; 
    while (file >> word) {
    	//if numbers of char in the actual line + the next word length >= 80 then we reinicialize counters
        if (lineCharCount + word.length() >= 80) {
            std::cout << std::endl;
            lineCharCount = 0;
            lineCount++;
        }
        //We pass to the next page
        if (lineCount == 25) {
            std::cout << "\nPage " << pageCount+1 << std::endl;
            pageCount++;
            lineCount = 0;
        }
        std::cout << word << ' ';
        //The number of characthers that we have in the actual line
        lineCharCount += word.length() + 1;
    }
    std::cout << std::endl;
    file.close();
    
    return 0;
}

