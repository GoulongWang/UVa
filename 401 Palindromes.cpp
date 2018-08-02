#include<iostream>
#include<string>
using namespace std;
const char r[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
string msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrome"};

char R(char ch){
	return r[isalpha(ch)? ch - 'A': ch - '0' + 25];
}

int main(){
	string s;
	while(cin >> s){
		int p = 1, m = 1;
		for (int i = 0; i <= (s.size() - 1) / 2; i++){
			if(s[i] != s[s.size() - 1 - i]) p = 0;
			if(R(s[i]) != s[s.size() - 1 - i]) m = 0;
		}
		cout << s << " -- is " << msg[2 * m + p] << ".\n\n";
	}

	return 0;
}
