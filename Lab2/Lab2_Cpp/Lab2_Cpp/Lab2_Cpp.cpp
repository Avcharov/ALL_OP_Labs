#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Input x, y";
    cin >> x >> y;
    if ((y >= x - 1 && x <= 0 && y >= 1) || (y >= x - 1 && x >= 1 && y <= 0))
        cout << "Yes"; 
    else
        cout << "No";

    return 0;
}
