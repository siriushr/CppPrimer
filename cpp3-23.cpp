#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector<int> vInt;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) 
		vInt.push_back( rand() % 1000 );

	for (auto it = vInt.begin(); it != vInt.end(); it++) 
		cout << *it << " ";
	cout << endl;

	for (auto it2 = vInt.begin(); it2 != vInt.end(); it2++) {
		*it2 *= 2;
		cout << *it2 << " ";
	}
	cout << endl;
	return 0;
}