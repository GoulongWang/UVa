#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char s[1001];
	memset(s, '\0', sizeof(s));
	while(scanf("%s", s), strcmp(s, "0")){
		int sum[2] = {0, 0};
		for (int i = 0; i < strlen(s); i++) sum[i % 2] += s[i] - '0';
		printf("%s %s a multiple of 11.\n", s, abs(sum[0] - sum[1]) % 11 == 0? "is": "is not");
	}
	return 0;
}
