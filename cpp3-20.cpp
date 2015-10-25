#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector<int> ivec;
	int i;
	while (cin >> i)
		ivec.push_back(i);

	decltype(ivec.size()) n = ivec.size();

	for (decltype(n) k = 0; k < ivec.size() - 1; k++) {
		cout << ivec[k] + ivec[ivec.size() - k - 1] << " ";
		if ((k + 2) % 10 == 0)
			cout << endl;
	}

	if (ivec.size() % 2)
		cout << ivec[ivec.size() / 2] << endl;

	return 0;
}