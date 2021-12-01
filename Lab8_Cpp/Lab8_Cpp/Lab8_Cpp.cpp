#include <iostream>
#include <iomanip>
#include <stdio.h>    
#include <stdlib.h>     
#include <time.h>  

using namespace std;

void input(int** arr, int m, int n);
void output(int** arr, int m, int n);
void add_row(int ** &arr,int &m,int &n);

int main()
{
	int m, n;
	//srand(time(NULL));
	cout << "Input m,n - ";
	cin >> m >> n;
    int** arr = new int*[m];
	for (int count = 0; count < m; count++)
		arr[count] = new int[n];

	input(arr, m, n);
	output(arr, m, n);

	add_row(arr, m, n);
	cout << endl;
	output(arr, m, n);


}

void input(int** arr, int m, int n) {//Ввод массива
	
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = rand()%15  + 1;
}


void output(int** arr, int m, int n) {//Вывод массива
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << arr[i][j];

		cout << endl;
	  }
	}



void add_row(int** &arr, int &m, int &n) {
	/*Инициализация вспомогательного массива*/
	int** newArray = new int* [m + 1];

	for (int count = 0; count < m+1; count++)
		newArray[count] = new int[n+1];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			newArray[i][j] = arr[i][j];
	/*Заполнение m-ой строки*/
	for (int j = 0; j < n; j++)
			newArray[m][j] = 0;

	for (int j = 0; j < n; j++)       
		for (int k = 0; k < m; k++)
		newArray[m][j] +=arr[k][j] ;
	/*Заполнение n-ого столбца */
	for (int j = 0; j < m; j++)
			newArray[j][n] = 0;

	for (int j = 0; j < m; j++)
		for (int k = 0; k < n; k++)
		newArray[j][n] +=arr[j][k];
	/*Заполнение A[m,n] элемента*/
	newArray[m][n] = 0;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			newArray[m][n] += arr[i][j];
	//////////////////////////////////

    m++;//Увеличение размера массива
	n++;

	for (int count = 0; count < m-1; count++)//Удаление массива
		delete[] arr[count];

	
	arr = newArray;
		
}


