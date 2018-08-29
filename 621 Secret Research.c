#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[1000];
		scanf("%s", s);
		if (s[strlen(s) - 2] == '3' && s[strlen(s) - 1] == '5') puts("-");
		else if (s[0] == '9' && s[strlen(s) - 1] == '4') puts("*");
		else if (s[0] == '1' && s[1] == '9' && s[2] == '0') puts("?");
		else puts("+");
	}
	return 0;
}

/*
1. 其實可以不用判斷 positive result : S = 1 or S = 4 or S = 78，
   因為如果數字都判斷不出來的話，題目上說 "a first match from the above
   list should be outputted"，數字判斷不出來一樣會印出 "+"
*/
