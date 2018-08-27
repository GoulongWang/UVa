#include<stdio.h>
int main(){
	int cnt = 0;
	char s[6];
	while(scanf("%s", s) && s[0] != '*')
		printf("Case %d: Hajj-e-A%s\n", ++cnt, s[0] == 'H' ? "kbar": "sghar");
	return 0;
}
