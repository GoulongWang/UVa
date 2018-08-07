#include<iostream>
#include<cstring>
using namespace std;
int main(){
	unsigned T;
	cin >> T;
	while(T--){
		unsigned score = 0, cnt = 0;
		char s[85];
		cin >> s;
		for (int i = 0; i < strlen(s); i++) s[i] == 'O'? score += ++cnt: (cnt = 0);
		cout << score << endl;
	}
}
