#include <iostream>
using namespace std;
int nine(int S){
	int degree = 1, SUM = 0;
	if (S == 9) return 1;
	else{
		while(S) SUM += S % 10, S /= 10;
		return degree + nine(SUM);
	}
}

int main(){
	string s;
	while(cin >> s, s != "0"){
		int sum = 0;
		for (int i = 0; i < s.length(); i++) sum += s[i] - '0';
		if (sum % 9 == 0) cout << s << " is a multiple of 9 and has 9-degree " << nine(sum) << ".\n";
		else cout << s << " is not a multiple of 9.\n";
	}
}
