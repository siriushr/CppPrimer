#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> group;
	string word;

	while (cin >> word) {
		for (auto &c: word) 
			c = toupper(c);
		group.push_back(word);
	}

	for (auto c: group) 
		cout << c << endl;
	return 0;
}