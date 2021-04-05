#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char a[10], b[10];
	int pa = 0, pb = 0, da, db;
	cin >> a >> da >> b >> db;
	int i = 0;
	for (i = 0; i < strlen(a); i++) {
		if (a[i] - '0' == da)
			pa = pa * 10 + da;
		else
			continue;
	}
	for (i = 0; i < strlen(b); i++) {
		if (b[i] - '0' == db)
			pb = pb * 10 + db;
		else
			continue;
	}
	cout << pa + pb << endl;

	return 0;
}
