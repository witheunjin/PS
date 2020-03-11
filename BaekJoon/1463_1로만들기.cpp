#include <iostream>
#include <algorithm>
using namespace std;

int cache[111];
int calc(int n) {
	int& ret = cache[n];
	if (ret != -1) return ret;
	if (n == 1) return 0;
	if (n % 3 == 0 && n % 2 == 0)
		return ret = 1 + min(calc(n/3),calc(n/2));
	if (n % 3 == 0) return ret = 1 + min(calc(n / 3), calc(n - 1));
	if (n % 2 == 0) return ret = 1 + min(calc(n / 2), calc(n - 1));
	return ret = 1 + calc(n - 1);
}
int main() {
	memset(cache, -1, sizeof(cache));
	int N;
	cin >> N;
	cout << calc(N) << endl;
	return 0;
}