#include <iostream>
using namespace std;

int main() {
	int i, j;
	bool isprime;
	int a, b;
	int sum = 0;
	cout << "Input a - ";
	cin >> a;
	cout << "Input b - ";
	cin >> b;
	for (i = a; i < b; i++) {
		isprime = true;
			if ((i % 2) == 0 || i<0) isprime = false;

			if (isprime) {
				cout << i << endl;
				sum += i * i;
			}
	}
	cout << sum;

	return 0;
}
