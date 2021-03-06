#include <iostream>
#include <string>
using namespace std;

unsigned int gcd(unsigned int n1, unsigned int n2) {
    unsigned int tmp;
    while (n2 != 0) {
        tmp = n1;
        n1 = n2;
        n2 = tmp % n2;
    }
    return n1;
}

string NumeratorFractionPeriod(unsigned int numerator, unsigned int denumerator)
{
// дріб n/m

int n = numerator;
int m = denumerator;

while (m % 2 == 0) {
    m = m / 2;
    n = n * 5;
}

while (m % 5 == 0) {
    m = m / 5;
    n = n * 2;
}

int c = gcd(n, m);
n = n / c;
m = m / c;
string Period;
if (m == 1) {
Period = string(std::to_string(n));
return Period;
}

if (n > m) {
    Period = string(std::to_string((n - n % m) / m));
    n = n % m;
    if (n == 0){
        return Period; 
    }

Period = Period + "(";
}
else{
Period = "(";
}

while (n % 10 == 0) {
    n = n / 10;
}

int i = n;
while (1) {
    int j = 0;
    while (i < m){
        i = i * 10;
    j = j + 1;
    if (j > 1) {
        Period = Period + "0";
    }
}

int check = i - n;
if (check % m == 0) {
    Period = Period + std::to_string((check) / m);
    break;
}
else{
j = i % m;
Period = Period + std::to_string((i - j) / m);
i = j;
}
}

return Period + ")";

}

int main()
{
	setlocale(LC_ALL,"");
    cout << "Введiть n:\n";
    std::string sn;
    cin >> sn;
    unsigned int n = atoi(sn.c_str());
    cout << "Введiть m:\n";
    std::string sm;
    cin >> sm;
    unsigned int m = atoi(sm.c_str());
    cout<<"Числа пiсля ',' (перiод буде указаний у дужках , якщо вiн iснує) : " << NumeratorFractionPeriod(n, m);
    // наприклад:
    // n=1 , m=3 -> (3) , бо 1/3=0.333333.....
    // n=1 , m=7 -> (142857) , бо 1/7=0.142857142857142857.....
    // n=1 , m=6 -> 1(6) , бо 1/6=0.166666666666666.....
    // n=1 , m=2 -> 5 , бо 1/2=0.5
    return 0;
}

