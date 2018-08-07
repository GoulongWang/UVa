#include<stdio.h>
#include<string.h>
int main(){
	unsigned T;
	scanf("%u", &T);
	while(T--){
		unsigned score = 0, cnt = 0;
		char s[85];
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++) s[i] == 'O'? score += ++cnt: (cnt = 0);
		printf("%u\n", score);
	}

	return 0;
}
