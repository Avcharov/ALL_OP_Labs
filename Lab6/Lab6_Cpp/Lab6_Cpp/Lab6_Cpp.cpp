#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;

long int kvad(int a, int b) {
    return a * a - b * b;
}

long double drob(int a, int b, int c) {
    return (a + b) / (1.0 * 4 * c * a);
}

int main() {
    int a, b, c, d;
    cout << "Input a,b,c,d";
    cin >> a >> b >> c >> d;
    long double one = (kvad(a, b) + kvad(c, d)) / (1.0 * sqrt(drob(a, b, c)));
    long double two = (c - drob(a, b, c) + 1) / (1.0 * (kvad(b, c) - kvad(a, b)));
    long double three = 1 + (sqrt(drob(a, b, c) / (1.0 * (kvad(b, c) - kvad(a, c)))));
    cout << one + two * three;
    return 0;
}
