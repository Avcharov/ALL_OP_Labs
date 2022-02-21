
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Header.h"
using namespace std;


int main()
{
	cout << "Enter input file - ";
	string name_first = inputFile();
	string name_out = "Output_"+name_first;
	newFile(name_first,name_out);
	count(name_out);
	cout <<"Input file: " << endl;
	outputf(name_first);
	cout << endl;
	cout <<"Output file: " << endl;
	outputf(name_out);

}
