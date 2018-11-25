#include <iostream>
using namespace std;
int main(){
	int t, ans[] = {76, 16, 56, 96, 36};
	for(cin >> t; t; t--){
		string s;
		cin >> s;
		if (s.length() == 1 && s[0] == '0') cout << "1\n";
		else if (s.length() == 1 && s[0] == '1') cout << "66\n";
		else cout << ans[(s[s.length() - 1] - '0') % 5] << endl;
	}
}
