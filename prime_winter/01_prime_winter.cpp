#include <iostream>
using namespace std;
int main() {
	int X, Y;
	cin >> X >> Y;
	long long *d = new long long[Y+1];
	for (long long i = 0; i <= Y; i++) {
		if (i == X) {
			d[i] = 1;
		}
		else if (i <= X) {
			d[i] = 0;
		}
		else if ((i % 2 == 0) && (i % 3 == 0)) {
			d[i] = d[i - 1] + d[i / 2] + d[i / 3];
		}
		else if ((i % 2 == 0) && (i % 3 != 0)) {
			d[i] = d[i-1] + d[i/2];
		}
		else if ((i % 2 != 0) && (i % 3 == 0)) {
			d[i] = d[i - 1] + d[i / 3];
		}
		else if ((i % 2 != 0) && (i % 3 != 0)) {
			d[i] = d[i - 1];
		}
	}
	cout << d[Y];
	return 0;
}
