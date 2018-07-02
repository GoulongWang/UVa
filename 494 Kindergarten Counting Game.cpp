#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string s;
	while(getline(cin, s)){
		int cnt = 0;
		for (int i = 1; s[i] != '\0'; i++) if (!isalpha(s[i]) && isalpha(s[i-1])) cnt++;
		cout << cnt << endl;
	}
}
