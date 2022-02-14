
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

string longestWord(string str) {
	istringstream ist(str);
	string longest;

	ist >> longest;
	while (ist >> str)
		if (str.length() > longest.length())
			longest = str;
	return longest;
}

string newFile(string name1) {
	string name;
	string str;
	cout << "Enter output file - ";
	cin >> name;
	ofstream out(name);
	ifstream in(name1);
	while (getline(in, str)) {
		string longest = longestWord(str);
		out << longest << '\n';
	}

	out.close();
	return name;

}

void count(string name1) {
	string str;
	int counter = 0;
	ifstream in(name1);
	ofstream out;
	out.open(name1, ios::app);

	while (in >> str)
		++counter;
	out << counter;
	out.close();

}

string inputFile() {
	string name;
	string str;
	cout << "Enter input file - ";
	cin >> name;
	ofstream out(name);
	cout << "Enter str - ";
	do {
		getline(cin, str);
		str[0] == 'N' ? out << '\n' : out << str << '\n';
	} while (str[0] != 'N');
	out.close();
	return name;

}

