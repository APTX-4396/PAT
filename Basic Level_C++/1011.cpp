#include<iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	long int a[10], b[10], c[10], i = 0;
	for (i = 0; i < x; i++) {
		cin >> a[i];
		cin >> b[i];
		cin >> c[i];
	}
	for (i = 0; i < x; i++) {
		if (a[i] + b[i] > c[i])
			cout << "Case #" << i + 1 << ": true" << endl;
		else
			cout << "Case #" << i + 1 << ": false" << endl;
	}

	return 0;
}
