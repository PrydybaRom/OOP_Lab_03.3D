#include <iostream>
#include "Rational_OPEN.h"
#include "Rational_CLOSE.h"

int main() {
    // Робота з класом Pair
    Pair pair1(3, 4);
    Pair pair2(5, 6);

    std::cout << "Pair 1: " << pair1 << std::endl;
    std::cout << "Pair 2: " << pair2 << std::endl;

    // Робота з класом Rational_OPEN
    Rational rationalOpen1(1, 2);
    Rational rationalOpen2(3, 4);

    std::cout << "Rational_OPEN 1: " << static_cast<std::string>(rationalOpen1) << std::endl;
    std::cout << "Rational_OPEN 2: " << static_cast<std::string>(rationalOpen2) << std::endl;

    // Робота з класом Rational_CLOSE
    Rational_CLOSE rationalClose1(1, 2);
    Rational_CLOSE rationalClose2(1, 2);

    std::cout << "Rational_CLOSE 1: " << static_cast<std::string>(rationalClose1) << std::endl;
    std::cout << "Rational_CLOSE 2: " << static_cast<std::string>(rationalClose2) << std::endl;

    // Порівняння об'єктів Rational_OPEN
    std::cout << "Is Rational_OPEN 1 equal to Rational_OPEN 2? " << (rationalOpen1 == rationalOpen2 ? "Yes" : "No") << std::endl;

    // Порівняння об'єктів Rational_CLOSE
    std::cout << "Is Rational_CLOSE 1 equal to Rational_CLOSE 2? " << (rationalClose1 == rationalClose2 ? "Yes" : "No") << std::endl;

    std::cout << "Size of TestClass with #pragma pack(1): " << sizeof(Rational) << " bytes\n";
    std::cout << "Size of TestClass without #pragma pack(1): " << sizeof(Rational_CLOSE) << " bytes\n";

    return 0;
}
