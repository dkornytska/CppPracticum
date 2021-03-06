#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL,"");
    
    std::string xs;
    double x;
    do{
    cout << "Введiть x (0<x<1):\n";
    cin >> xs;
    x = atof(xs.c_str());
    } while (x <= 0 || x >= 1);
    
    std::string xn;
    int n;
    do{
    cout << "Введiть n (n>=0):\n";
    cin >> xn;
    n = atoi(xn.c_str());
    } while (n < 0);

    double sum = 0;
    for (int k = 0; k < n; k++) {
        sum += k * pow(x, k) * pow(1 - x, n - k);
    }
    cout << "Сумою буде: " << sum;
    return 0;
}

