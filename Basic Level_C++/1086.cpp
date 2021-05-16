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


#include<iostream>
using namespace std;
int main() {
	int a, b;
	int n, right_digit;
	bool flag = 1;
	cin >> a >> b;
	n = a * b;
	do {
		right_digit = n % 10;
		if (flag) {
			if (right_digit == 0) {
				;//空语句 无任何含义但需要表现出来
			}
			else {
				flag = 0;
				cout << right_digit;
			}
		}
		else
		cout << right_digit;
		n /= 10;
	} while (n != 0);

	return 0;
}
