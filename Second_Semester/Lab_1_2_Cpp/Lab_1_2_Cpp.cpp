
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Header.h"
using namespace std;


int main()
{
	string name_first = inputFile();
	string name_out = newFile(name_first);
	count(name_out);
}
