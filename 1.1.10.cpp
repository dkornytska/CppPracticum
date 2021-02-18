#include <iostream>
#include <cmath>
using namespace std;


double D(double a, double b, double c) {
	double discr = b * b - 4 * a * c;

	return discr;
}

int main()
{
	setlocale(LC_ALL,"");
	double a, b, c, V, U, r;
	a = 1;
	b = 1;
	c = 1;
	V = 1;
	U = 1;
	r = 1;
	if (r == 0) {
		cout << "r не можe бути 0";
	}
	else{
	if (b == 0.0) {
		if (a == 0.0) {
			cout << "a і b неможуть бути 0";
		}
		else {
			double x = -c / a;
			if (x == (V - r) || x == (V + r)) cout << "одна точка дотику";
			else if (x > (V - r) && x < (V + r)) cout << "двi точки пеpетину";
			else cout << "жодної спiльної точки";
		}
	}
	else {
		double d = D(1 + (a * a) / (b * b), (2 * c * a) / (b * b) - 2 * V + (2 * a * U) / b, V * V + (c * c) / (b * b) + (2 * c) / b + U * U - r * r);
		if (d > 0) cout << "двi точки пеpетину" ;
		else if (d == 0) cout << "одна точка дотику";
		else cout << "жодної спiльної точки";
	}
	}
	return 0;
}

