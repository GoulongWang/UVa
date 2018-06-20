#include<iostream>
using namespace std;
int main(){
	int n1, n2;
	while(cin >> n1 >> n2 && (n1 || n2)){
		int carry = 0, cnt = 0;
		while(n1 || n2){
			carry += n1 % 10 + n2 % 10;
			carry /= 10;
			n1 /= 10, n2 /= 10;
			if(carry) cnt++;
		}
		if(cnt == 0) cout << "No carry operation.\n";
		else if(cnt == 1) cout << "1 carry operation.\n";
		else cout << cnt << " carry operations.\n";
	}
}
