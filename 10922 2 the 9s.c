#include<stdio.h>
#include<string.h>
int nine(int S){
	int degree = 1, SUM = 0;
	if (S == 9) return 1;
	else{
		while(S) SUM += S % 10, S /= 10;
		return degree + nine(SUM);
	}
}

int main(){
	char s[1001];
	while(scanf("%s", s) != EOF , strcmp(s, "0")){
		int sum = 0;
		for (int i = 0; i < strlen(s); i++) sum += s[i] - '0';
		if (sum % 9 == 0) printf("%s is a multiple of 9 and has 9-degree %d.\n", s, nine(sum));
		else printf("%s is not a multiple of 9.\n", s);
	}

	return 0;
}
