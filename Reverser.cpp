#include <iostream>
#include <cmath>
class Reverser {
    public:
        Reverser(){};

        int reverseDigit(int value) {
            if (log10(value) <= 1) return value%10;
            return (value%10)*(pow(10, floor(log10(value)))) + reverseDigit(static_cast<int>(value/10));
        };

        std::string reverseString(std::string characters) {
            if (characters.length() == 0) return "";
            char temp = characters[characters.length()-1];
            characters.pop_back();
            return temp + reverseString(characters);
        };
};


int main(void) {

    Reverser r;

    std::cout << r.reverseDigit(123450) << std::endl;


    return 0;
}