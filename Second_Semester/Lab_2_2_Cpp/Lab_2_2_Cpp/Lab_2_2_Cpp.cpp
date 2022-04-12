#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Header.h"
using namespace std;

int main()
{
	string fileName;
	int size;
			
	cout << "Enter the num of people: \n";
	cin >> size;
	
	TPrac* Human = new TPrac[size];
	
	cout << "Enter input file - ";	
	cin >> fileName;
	fileName = fileName + ".txt";
	
	ofstream out(fileName, ios::binary);
	
	Human = inputFile(Human,out);
	Human = AgeDataDelete(Human,size);
	
	string outputFile = "Output_" + fileName;
	ofstream out2(outputFile, ios::binary);
	
	Output(Human, size, out2);
}

