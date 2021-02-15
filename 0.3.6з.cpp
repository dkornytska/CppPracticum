#include <iostream>
#include <cmath>
using namespace std;

double invsqrt(double x, double a) {
  return x / sqrt(1 + a * x * x);
}

double invsqrt_derivative(double x, double a) {
  return 1/pow(1 + a * x * x,1.5);
}


int main()
{
  return 0;
}