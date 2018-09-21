#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int t, r;
	cin >> t;
	while(t--){
		char a, b, c;
		scanf(" %c%c%c-%4d", &a, &b, &c, &r);
		int l = (a - 'A') * 676 +(b - 'A') * 26 + c - 'A';
		cout << (abs(l - r) <= 100? "nice\n": "not nice\n");
	}
}
