#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int main() {
	list<string> slist;
	string w, aim;
	cin >> aim;

	while (cin >> w) 
		slist.push_back(w);

	auto b = slist.cbegin(), e = slist.cend();
	int cnt;
	cnt = count(b, e, aim);
	cout << cnt << endl;
	return 0;
}