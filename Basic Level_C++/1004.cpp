#include<iostream>
#include<string>
using namespace std;

int main() {
	int m;
	cin >> m;
	string na1, na2;
	string nu1, nu2;
	int max = 0;
	int min = 100;
	for (int i = 0; i < m; i++) {
		string name;
		string num;
		int score;
		cin >> name >> num >> score;
		if (score > max) {
			max = score;
			na1 = name;
			nu1 = num;
		}
		if (score < min) {
			min = score;
			na2 = name;
			nu2 = num;
		}
	}
	cout << na1 << " " << nu1 << endl;
	cout << na2 << " " << nu2;

	return 0;
}
