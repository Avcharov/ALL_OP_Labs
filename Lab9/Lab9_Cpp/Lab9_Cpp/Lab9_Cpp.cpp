#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

int main()
{
    int count = 0;
    string s, word;
    int n;cout << "String:\n"; 
    getline(cin, s);
    cout << "Input N - ";
    cin >> n;
    
   
    stringstream words(s);
    while (words >> word)
    {
        if (word.size() < n) { cout << word << "\n"; count++; }
    }

    system("pause");
    return 0;
}