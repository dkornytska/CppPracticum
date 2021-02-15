#include <iostream>
#include <cmath>
using namespace std;

double SqrtD(double a, double b, double c) {
    double discr = b * b - 4 * a * c;
    return sqrt(discr);
}


int main()
{
    double a = 3.;
    double b = 100.;
    double c = 2.;
    double sqrtD = SqrtD(a, b, c);
    double x0 = (-b + sqrtD) / (2 * a);
    double x1 = (-b - sqrtD) / (2 * a);
    cout << "x0=" << x0 << endl;
    cout << "x1=" << x1 << endl;
    return 0;
}