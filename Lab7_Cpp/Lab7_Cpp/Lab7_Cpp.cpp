#include <iostream>
#include <iomanip>
#include <stdio.h>     
#include <stdlib.h> 
using namespace std;

void input(int *a, int *b, int n);
long nod(int a, int b);
long max(int *a, int *b, int n);
void output(int* a, int n);

int main()
{
   // srand(time(0));
    int n;
    cout << "Input n - ";
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    int *c = new int[n];

    input(a, b, n);//генерація елементів массивів а та b

    output(a, n);
    output(b, n);

    int max_mas = max(a, b, n);//обчислення максимального елемента з двох массивів
    cout << endl;

    for (int i = 0; i < n; i++) {
        c[i] = max_mas * abs(nod(a[i], b[i]));//обчислення массиву с
        cout <<setw(3)<< abs(nod(a[i], b[i])) << " ";
    }
    cout << endl;

    cout <<"Max - " << max_mas<< endl;
    
    output(c, n);

    delete[]a;
    delete[]b;
    delete[]c;


}

void input(int* a, int* b,int n) {
    for (int i = 0; i < n; i++) {//генерація елементів массивів а та b
        a[i] = rand() % 25 - 5;
        b[i] = rand() % 27 - 5;
    }
}

long nod(int a, int b) {
    return b == 0 ? a : nod(b, a % b);//Функція знаходження НСД
}


long max(int *a,int *b,int n) //Функція знаходження максимального елементу з двох массивів
{
    int max_1 = a[0];
    for (int i = 0; i < n; i++) {
        if (max_1 < a[i]) max_1 = a[i];
        if (max_1 < b[i]) max_1 = b[i];
    }
    return max_1;
}

void output(int* a,int n) {
    for (int i = 0; i < n; i++) 
        cout << setw(3) << a[i] << " ";//вивод массиву 
    
    cout << endl;
}
