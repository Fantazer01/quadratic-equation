#include "equation.h"
#include "LabTools/LabTools.h"

using namespace LabTools;

void readParameter(double &a, double &b, double &c) {
    char msg_err[] = "please, enter number";

    std::cout << "a: ";
    getNum(a, msg_err);
    std::cout << "b: ";
    getNum(b, msg_err);
    std::cout << "c: ";
    getNum(c, msg_err);
}

void PutAnswer(std::vector <double> v) {

    std::cout << "Solutions: " << std::endl;

    if (v.empty())
        std::cout << "equation doesn't have solution" << std::endl;
    else
        for (double i : v)
            std::cout << i << std::endl;
    
}

int main() {
    std::cout << "Welcome! This program solve quadratic equation." << std::endl;
    std::cout << "Enter number a, b and c from equation ax^2+bx+c=0" << std::endl;
    double a, b, c;
    
    try {
        readParameter(a, b, c);
        PutAnswer(computeAnswer(a, b, c));
    } catch (const char s[]) {
        std::cout << s;
        return 1;
    }
    return 0;
}
