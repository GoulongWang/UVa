#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	int t, Cnt = 0;
	scanf("%d", &t);
	while(t--){
		char s[50];
		scanf("%s", s);
		printf("Case %d: ", ++Cnt);
		for (int i = 0; i < strlen(s); i++)
			if (isalpha(s[i])){
				int cnt = s[i + 1] - '0', j = 2;
				while(isdigit(s[i + j])) cnt = cnt * 10 + s[i + j] - '0', j++;
				while(cnt--) putchar(s[i]);
			}
		puts("");
	}
	return 0;
}
