#include<stdio.h>
int main(){
	char s[50];
	while(fgets(s, 50, stdin) != NULL) printf("%s", s);
	return 0;
}
