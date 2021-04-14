#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	int size[10];
	int i = 0, num = 0;
	cin >> a >> b;
	c = a * b;
	for (num; c != 0; num++) {
		size[num] = c % 10;
		c = c / 10;
	}
	int flag = 1;
	for (i = 0; i < num; i++) {
		if (flag == 1) {
			if (size[i] == 0)
				continue;
			else {
				cout << size[i];
				flag = 0;
			}
		}
		else
			cout << size[i];
	}

	return 0;
}
