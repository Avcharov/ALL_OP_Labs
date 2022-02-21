
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

void newFile(string name1,string name) {
	string str;
	ofstream out(name);
	ifstream in(name1);
	while (getline(in, str)) {
		string longest = longestWord(str);
		out << longest << '\n';
	}
	out.close();

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

void outputf(string name1) {
	string str;
	ifstream in(name1);

	while (getline(in,str))
		 cout <<str <<endl;
	in.close();

}


string inputFile() {
	string name;
	string str;

	cin >> name;
	cout << "Enter str - ";
	name = name + ".txt";
	ofstream out(name);
	while (getline(cin, str))
		out << str<<'\n';
	
	out.close();
	return name;

}

