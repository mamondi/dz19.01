#include "subclass.h"

int main() {
    String str1("Hello");
    String str2("World");

    String concatenatedStr = str1 + str2;
    std::cout << "Concatenated String: ";
    concatenatedStr.displayInfo();
    std::cout << std::endl;

    if (str1 == str2) {
        std::cout << "Strings are equal." << std::endl;
    }
    else {
        std::cout << "Strings are not equal." << std::endl;
    }

    BinaryString binaryStr1("1101");
    BinaryString binaryStr2("101");

    BinaryString sum = binaryStr1 + binaryStr2;
    std::cout << "Sum of Binary Strings: ";
    sum.displayInfo();
    std::cout << std::endl;

    BinaryString negatedSum = sum;
    negatedSum.changeSign();
    std::cout << "Negated Sum: ";
    negatedSum.displayInfo();
    std::cout << std::endl;

    return 0;
}