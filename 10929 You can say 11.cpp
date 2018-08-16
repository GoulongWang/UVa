#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string s;
	while(cin >> s, s != "0"){
		int sum[2] = {0, 0};
		for (int i = 0; i < s.length(); i++) sum[i % 2] += s[i] - '0';
		cout << s << (abs(sum[0] - sum[1]) % 11 == 0? " is": " is not") << " a multiple of 11.\n";
	}
}
