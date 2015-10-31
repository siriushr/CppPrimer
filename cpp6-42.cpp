#include <iostream>
#include <string>
using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word+ending : word;
}

int main() 
{
	string word, ending;
	int i;
	cin >> i >> word >> ending;
	cout << make_plural(i, word, ending) << endl;
	return 0;
}