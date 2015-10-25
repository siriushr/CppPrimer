#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> v2(10);
	vector<int> v5{10, 42};
	vector<string> v7{10, "hi"};

	cout << v2.size() << endl;
	if (v2.begin() != v2.end()) {
		for (auto it = v2.cbegin(); it != v2.cend(); it++) 
			cout << *it << " ";
	}
	cout << endl;

	cout << v5.size() << endl;
	if (v5.begin() != v5.end())
		for (auto it = v5.cbegin(); it != v5.cend(); it++) 
			cout << *it << " ";
	cout << endl;

	return 0;
}