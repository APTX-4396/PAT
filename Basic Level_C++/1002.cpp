//13分版本 三个switch语句写得太复杂了 如果不加string.h的头文件的话就会变成零分 之后再来看看怎么修改
#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char str[101];
	int i = 0, sum = 0, character = 0;
	cin >> str;
	for (i = 0; i < strlen(str); i++) {
		character = str[i] - '0';
		sum += character;
	}
	switch (sum / 100) {
	case 0:cout << "ling "; break;
	case 1:cout << "yi "; break;
	case 2:cout << "er "; break;
	case 3:cout << "san "; break;
	case 4:cout << "si "; break;
	case 5:cout << "wu "; break;
	case 6:cout << "liu "; break;
	case 7:cout << "qi "; break;
	case 8:cout << "ba "; break;
	case 9:cout << "jiu "; break;
	default:break;
	}	
	switch ((sum-((sum/100)*100))/10) {
	case 0:cout << "ling "; break;
	case 1:cout << "yi "; break;
	case 2:cout << "er "; break;
	case 3:cout << "san "; break;
	case 4:cout << "si "; break;
	case 5:cout << "wu "; break;
	case 6:cout << "liu "; break;
	case 7:cout << "qi "; break;
	case 8:cout << "ba "; break;
	case 9:cout << "jiu "; break;
	default:break;
	}
	switch ((sum - ((sum / 100) * 100)) % 10) {
	case 0:cout << "ling"; break;
	case 1:cout << "yi"; break;
	case 2:cout << "er"; break;
	case 3:cout << "san"; break;
	case 4:cout << "si"; break;
	case 5:cout << "wu"; break;
	case 6:cout << "liu"; break;
	case 7:cout << "qi"; break;
	case 8:cout << "ba"; break;
	case 9:cout << "jiu"; break;
	default:break;
	}

	return 0;
}

//19分版本 将百分数的打印零删去 还差1分了QAQ
#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char str[100];
	int i = 0, sum = 0, character = 0;
	cin >> str;
	for (i = 0; i < strlen(str); i++) {
		character = str[i] - '0';
		sum += character;
	}
	switch (sum / 100) {
	case 0:break;
	case 1:cout << "yi "; break;
	case 2:cout << "er "; break;
	case 3:cout << "san "; break;
	case 4:cout << "si "; break;
	case 5:cout << "wu "; break;
	case 6:cout << "liu "; break;
	case 7:cout << "qi "; break;
	case 8:cout << "ba "; break;
	case 9:cout << "jiu "; break;
	default:break;
	}	
	switch ((sum-((sum/100)*100))/10) {
	case 0:cout << "ling "; break;
	case 1:cout << "yi "; break;
	case 2:cout << "er "; break;
	case 3:cout << "san "; break;
	case 4:cout << "si "; break;
	case 5:cout << "wu "; break;
	case 6:cout << "liu "; break;
	case 7:cout << "qi "; break;
	case 8:cout << "ba "; break;
	case 9:cout << "jiu "; break;
	default:break;
	}
	switch ((sum - ((sum / 100) * 100)) % 10) {
	case 0:cout << "ling"; break;
	case 1:cout << "yi"; break;
	case 2:cout << "er"; break;
	case 3:cout << "san"; break;
	case 4:cout << "si"; break;
	case 5:cout << "wu"; break;
	case 6:cout << "liu"; break;
	case 7:cout << "qi"; break;
	case 8:cout << "ba"; break;
	case 9:cout << "jiu"; break;
	default:break;
	}

	return 0;
}
//20分版本 在sum<10时进行一次分类讨论
#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char str[101];
	int i = 0, sum = 0, character = 0;
	cin >> str;
	for (i = 0; i < strlen(str); i++) {
		character = str[i] - '0';
		sum += character;
	}
	switch (sum / 100) {
	case 0:break;
	case 1:cout << "yi "; break;
	case 2:cout << "er "; break;
	case 3:cout << "san "; break;
	case 4:cout << "si "; break;
	case 5:cout << "wu "; break;
	case 6:cout << "liu "; break;
	case 7:cout << "qi "; break;
	case 8:cout << "ba "; break;
	case 9:cout << "jiu "; break;
	default:break;
	}	
	switch ((sum-((sum/100)*100))/10) {
	case 0:
		if (sum < 10)
			break;
		else
			cout << "ling "; break;
	case 1:cout << "yi "; break;
	case 2:cout << "er "; break;
	case 3:cout << "san "; break;
	case 4:cout << "si "; break;
	case 5:cout << "wu "; break;
	case 6:cout << "liu "; break;
	case 7:cout << "qi "; break;
	case 8:cout << "ba "; break;
	case 9:cout << "jiu "; break;
	default:break;
	}
	switch ((sum - ((sum / 100) * 100)) % 10) {
	case 0:cout << "ling"; break;
	case 1:cout << "yi"; break;
	case 2:cout << "er"; break;
	case 3:cout << "san"; break;
	case 4:cout << "si"; break;
	case 5:cout << "wu"; break;
	case 6:cout << "liu"; break;
	case 7:cout << "qi"; break;
	case 8:cout << "ba"; break;
	case 9:cout << "jiu"; break;
	default:break;
	}

	return 0;
}
