#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<unsigned> group(11, 0);
	unsigned grade;

	while (cin >> grade) 
		if (grade <= 100) 
			++(*(group.begin() + grade / 10));

	for (auto r: group) 
		cout << r << " ";
	cout << endl;
	return 0;
}