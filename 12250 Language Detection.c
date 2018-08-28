#include <stdio.h>
#include <string.h>
int main(){
	int cnt = 0;
	char s[14], str[6][14] = {"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"}, 
		 lang[6][7] = {"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};
	while(scanf("%s", s) && s[0] != '#'){
		int isFind = 0;
		for (int i = 0; i < 6; i++)
			if (!strcmp(s, str[i])) {
				printf("Case %d: %.7s\n", ++cnt, lang[i]), isFind = 1;
				break;
			}

		if (!isFind) printf("Case %d: UNKNOWN\n", ++cnt);
	}
	return 0;
}
