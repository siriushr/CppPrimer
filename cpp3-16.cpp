#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 43};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << "v1: " << v1.size() << " ";
	for (auto c: v1)
		 cout << "\t" << c;
	cout << endl;

	cout << "v2: " << v2.size() << " ";
	for (auto c: v2)
		cout << "\t" << c;
	cout << endl;

	cout << "v3: " << v3.size() << " ";
	for (auto c: v3)
		cout << "\t" << c;
	cout << endl;

	cout << "v4: " << v4.size() << " ";
	for (auto c: v4)
		cout << "\t" << c;
	cout << endl;

	cout << "v5: " << v5.size() << " ";
	for (auto c: v5)
		cout << "\t" << c;
	cout << endl;

	cout << "v5: " << v5.size() << " ";
	for (auto c: v5)
		cout << "\t" << c;
	cout << endl;

	cout << "v6: " << v6.size() << " ";
	for (auto c: v6)
		cout << "\t" << c;
	cout << endl;

	cout << "v7: " << v7.size() << " ";
	for (auto c: v7)
		cout << "\t" << c;
	cout << endl;

	return 0;
}