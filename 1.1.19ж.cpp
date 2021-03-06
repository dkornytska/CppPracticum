#include <iostream>
#include <cmath>
#include <cfloat>

using namespace std;

bool isNearlyZero(double x){
    return fabs(x) < DBL_EPSILON;
}

double softExponential(double a, double x){
    if (isNearlyZero(a)){
        return x;
    } else{
        if(a < 0)
            return -log(1 - a*(x + a))/a;
        else
            return (exp(a*x)-1)/a;
    }
}
double softExponential_pohidna(double a, double x){
    if (isNearlyZero(a)){
        return 1;
    } else{
        if(a < 0)
            return 1/(1-a*(x+a));
        else
            return exp(a*x);
    }
}
int main() {
    double a, x;
    cin >> a >> x;
    cout << softExponential(a, x) << endl;
    cout << softExponential_pohidna(a, x) << endl;
    return 0;
} 