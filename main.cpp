#include <iostream>
#include "equation.h"
#include "LabTools/LabTools.h"

using namespace LabTools;

int main() {
    std::cout << "Welcome! This program solve quadratic equation." << std::endl;
    std::cout << "Enter number a, b and c from equation ax^2+bx+c=0" << std::endl;
    double a, b, c;
    try {
        std::cout << "a: ";
        getNum(a);
        std::cout << "b: ";
        getNum(b);
        std::cout << "c: ";
        getNum(c);
    } catch (const char s[]) {
        std::cout << s;
    }
    
    
    return 0;
}
