#include <iostream>
using namespace std;
long fib(int n) {
	if (n <= 0) return -1;
	if (n >= 1) {
		cout << "0" << endl;
	}
	if (n >= 2) {
		cout << "1" << endl;
	}
	long x = 0, y = 1;
	for (int i = 2; i < n; ++i) {
		long z = x + y;
		x = y;
		y = z;
		cout << y << endl;
	}
	return y;
}
int main() {
	fib(10);
}