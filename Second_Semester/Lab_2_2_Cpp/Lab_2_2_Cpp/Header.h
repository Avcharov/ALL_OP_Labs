#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct TPrac {
	string name;
	int birth;
	string sex;
	string job;
};

void Output(TPrac* newHuman, int size, ofstream& out);
TPrac* inputFile(TPrac*& Human, ofstream& out);
TPrac* AgeDataDelete(TPrac* Human, int& size);
int CheckAgeAndSize(int i, int Age, int& counter, int size, TPrac* Human, TPrac*& newHuman);
void Output(TPrac* newHuman, int size, ofstream& out);

