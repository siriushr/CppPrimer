#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector<int> vInt;
	int i;

	while(cin >> i)
		vInt.push_back(i);

	if (vInt.cbegin() == vInt.cend()) 
		return -1;

	auto b = vInt.cbegin(), e = vInt.cend();
	for (b != e - 1; b < e; b++, e--)
		cout << *b + *e << " ";

	if (vInt.size() % 2) 
		cout << vInt[vInt.size() / 2];

	return 0;
}