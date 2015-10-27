#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string str1, str2;
	string rsp;
	do {
		cout << "Please enter two strings:\n";
		cin >> str1 >> str2;
		cout << "The shorter one is \'"
			 << ((str1.size() < str2.size()) ? str1 : str2) 
			 << "\'" << endl;
		cout << "More? Press Y or N.\n";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');

	return 0;
}