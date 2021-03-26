#include<iostream>
using namespace std;
int main() {
	int n, i;
	i = 0;
	cin >> n;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			i++;
		}
		else {
			n = (3 * n + 1) / 2;
			i++;
		}
	}
	cout << i << endl;

	return 0;
}
