#include <iostream>
#include <vector>
using std::vector;

int main() {
	vector<int> ivec(5, 0);
	const int n = ivec.size();

	int array[n];
	auto it = ivec.begin();
	for (auto &val: array) {
		val = *it;
		it++;
	}

	return 0;
}