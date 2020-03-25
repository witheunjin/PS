//2839_설탕배달
/*
전체 아이디어 
- 구해야 하는 건 a+b의 최솟값.
  5kg 봉지의 개수를 a, 3kg 봉지의 개수를 b라고 가정했을 때 같은 무게일 때 a가 클수록 a+b의 합이 작다.
  5a+3b = N이라는 중복조합문제를 풀 때 가능한 a의 최대값을 먼저 구하는 것처럼 
  우선 가능한 최대 a값을 구하고 (five) 나머지 값이 3으로 나눠지면 a+b값을 반환하고 
  나누어떨어지지 않는다면 문제의 조건에 따라 -1을 반환한다. */
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