#include <iostream>
using namespace std;

int main() {
	int i,j,a,b;
	bool isprime;
	int n;
	int sum = 0;
	cout << "Input n";
	cin >> n;
	for (i = 1; i < n; i++) {
		isprime = true;
		for (j = 2; j <= i / 2; j++)
			if ((i % j) == 0) isprime = false;

		if (isprime)
			if (n % i == 0) cout << i << " ";
	}


	return 0;
}
