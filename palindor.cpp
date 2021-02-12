#include <iostream>
#include <string>

bool isPalindrome(const std::string & text);

int main() {

    std::string text;
    std::cin >> text;
    if (isPalindrome(text) == true){
        std::cout<< "Tekst jest palidromem" << std::endl;
    }
    else {
        std::cout<< "Tekst NIE jest palidromem" << std::endl;
    }
    return 0;
}

bool isPalindrome(const std::string & text) {
    for (uint8_t i = 0, j = text.size() - 1; i < text.size(); i++, j--){
        if (text[i] != text[j]){
            return false;
        }
    }
    return true;
}