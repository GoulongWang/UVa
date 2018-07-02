#include <stdio.h>
#include <ctype.h>
int main(){
	char s[200];
	while(fgets(s, 200, stdin)){
		int cnt = 0;
		for (int i = 1; s[i] != '\0'; i++) if (!isalpha(s[i]) && isalpha(s[i-1])) cnt++;
		printf("%d\n", cnt);
	}
	return 0;
}
