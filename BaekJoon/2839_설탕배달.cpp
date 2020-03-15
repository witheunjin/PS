#include <iostream>
using namespace std;

int candyBag(int n) {
	int five = n / 5;
	for (int i = five; i >= 0; --i)
		if ((n - 5 * i) % 3 == 0)
			return i + (n - 5 * i) / 3;
	return -1;
}

int main() {
	int n;
	cin >> n;
	cout << candyBag(n);
	return 0;
}