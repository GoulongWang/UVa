#include <iostream>
#include <cctype>
using namespace std;
int main(){
	int t, Cnt = 0;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << "Case " << ++Cnt << ": ";
		for (int i = 0; i < s.length(); i++)
			if (isalpha(s[i])){
				int cnt = s[i + 1] - '0', j = 2;
				while(isdigit(s[i + j])) cnt = cnt * 10 + s[i + j] - '0', j++;
				while(cnt--) putchar(s[i]);
			}
		cout << endl;
	}
}
