#include<iostream>
using namespace std;
int main() {
	int number, i = 1;
	cin >> number;
	for (i = 0; i < number / 100; i++)
	    cout << "B";
	for (i = 0; i < ((number - (number / 100) * 100) / 10); i++)
	    cout << "S";
	for (i = 0; i < ((number - (number / 100) * 100)) % 10; i++)
		cout << i+1;

	return 0;
}
