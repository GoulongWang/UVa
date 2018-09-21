#include <stdio.h>
int main(){
	int t, r;
	scanf("%d", &t);
	while(t--){
		char a, b, c;
		scanf(" %c%c%c-%4d", &a, &b, &c, &r);
		int l = (a - 'A') * 676 +(b - 'A') * 26 + c - 'A';
		puts(abs(l - r) <= 100? "nice": "not nice");
	}
	return 0;
}
