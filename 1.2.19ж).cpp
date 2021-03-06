#include <iostream>
using namespace std;

int main()
{
    cout << "Enter x:\n";
    std::string sx;
    cin >> sx;
    double x = atof(sx.c_str());
    cout << "Enter k:\n";
    std::string sk;
    cin >> sk;
    int k = atoi(sk.c_str());
    double res = 1;
    for (int i = 2*k; i > 0; i--) {
        res *= x;
        res /= i;
    }
    if (k % 2 == 0) {
        cout << "Result: " << res;
    }
    else {
        cout << "Result: " << -res;
    }
    return 0;
}

