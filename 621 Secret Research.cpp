#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if (s[s.length() - 2] == '3' && s[s.length() - 1] == '5') cout << "-\n";
		else if (s[0] == '9' && s[s.length() - 1] == '4') cout << "*\n";
		else if (s[0] == '1' && s[1] == '9' && s[2] == '0') cout << "?\n";
		else cout << "+\n";
	}
}
