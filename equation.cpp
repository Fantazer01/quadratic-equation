#include "equation.h"

std::vector <double> computeAnswer(double &a, double &b, double &c) {
    using namespace std;
    vector <double> v;
    double Discriminant = pow(b, 2) - 4*a*c;

    if (Discriminant < 0)
        return v;
    else if (Discriminant == 0) {
        v.push_back((-b)/(2*a));
        return v;
    }

    Discriminant = sqrt(Discriminant);

    v.push_back((-b-Discriminant)/(2*a));
    v.push_back((-b+Discriminant)/(2*a));

    return v;
}

