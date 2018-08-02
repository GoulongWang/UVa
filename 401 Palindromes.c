#include<stdio.h>
#include<string.h>
#include<ctype.h>
const char r[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

char R(char ch){
	return r[isalpha(ch)? ch - 'A': ch - '0' + 25];
}

int main(){
	char s[30], *msg[] = {"not a palindrome", "a regular palindrome", 
	     "a mirrored string", "a mirrored palindrome"};
	while(scanf("%s", s) != EOF){
		int p = 1, m = 1;
		for (int i = 0; i <= (strlen(s) - 1) / 2; i++){
			if(s[i] != s[strlen(s) - 1 - i]) p = 0;
			if(R(s[i]) != s[strlen(s) - 1 - i]) m = 0;
		}

		printf("%s -- is %s.\n\n", s, msg[2 * m + p]);
	}
	return 0;
}

/*
msg[2 * m + p] 是特殊解法
*/
