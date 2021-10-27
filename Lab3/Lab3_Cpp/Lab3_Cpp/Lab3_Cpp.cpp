#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;


int main()
{
	cout << "Input x ";
		double x;
	cin >> x;

		double sum = 0;
	double k = 0.0001;
	int n = 0;
	double step = x;
	double fact = 1.0;
	int sign = 1;
	double pool = abs(1.*sign * step / fact);
	if (x >= 0 && x <= 4) {
		while (pool > k) {
			sum += sign * step / fact;
			n++;
			sign = -sign;
			step *= x * x;
			fact *= 2 * n;
			cout << "pool = " << fixed << pool << endl;
			pool = abs(1. * sign * step / fact);
		}
		//n--;
		cout << "Sum - " << sum;
	}
	else cout << "Undefined x";
}

