#include "Header.h"
using namespace std;

TPrac* inputFile(TPrac*& Human, ofstream& out) {
	string name;
	string str;
	int counter = 0;

	int i = 0;
	while (getline(cin, str, '\n')) {
		switch (counter)
		{
		case 0:
			cout << "\nEnter the name: \n";
			break;
		case 1:
			cout << "Enter the birth: \n";
			Human[i].name = str;
			out << Human[i].name << '\n';
			break;
		case 2:
			cout << "Enter the sex: \n";
			Human[i].birth = stoi(str.substr(str.length() - 4, 4));//From str to int last 4 symbols
			out << str << '\n';
			break;
		case 3:
			cout << "Enter the job: \n";
			Human[i].sex = str;
			out << Human[i].sex << '\n';
			break;
		case 4:
			Human[i].job = str;
			out << Human[i].job << '\n';
			break;
		}
		if (counter == 4) {
			counter = 1;
			i++;
		}
		else
		{
			counter++;
		}
	}
	return Human;
	out.close();


}


int CheckAgeAndSize(int i, int Age, int& counter, int size, TPrac* Human, TPrac*& newHuman) {
	int k = size;
	if (Age != 70 && Human[i].sex[0] == 'M') {
		newHuman[counter] = Human[i];
		++counter;
		--k;
	}
	else if (Age != 65 && Human[i].sex[0] == 'F') {
		newHuman[counter] = Human[i];
		++counter;
		--k;
	}

	return k;
}

TPrac* AgeDataDelete(TPrac* Human, int& size) {
	TPrac* newHuman = new TPrac[size];
	int counter = 0;
	int realSize;
	for (int i = 0; i < size; i++) {
		int DataBirth = Human[i].birth;
		int TodaysYear = 2022;
		int Age = TodaysYear - DataBirth;

		realSize = CheckAgeAndSize(i, Age, counter, size, Human, newHuman);
	}
	Human = newHuman;
	size = realSize;
	return Human;
}

void Output(TPrac* newHuman, int size, ofstream& out) {
	for (int index = 0; index < size; index++)
	{
		out << newHuman[index].name << '\n';
		out << newHuman[index].birth << '\n';
		out << newHuman[index].sex << '\n';
		out << newHuman[index].job << '\n';
	}
}