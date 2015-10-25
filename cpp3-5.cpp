#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	string word, sum;

	while(cin >> word) 
		if (sum.empty()) 
			sum += word;
		else 
			sum += " " + word;

	cout << sum << endl;
	return 0;
}