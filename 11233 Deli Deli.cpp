#include <iostream>
#include <cstring>
using namespace std;
int cmp(char *str, char letter){
	for (int i = 0; str[i]; i++) if (str[i] == letter) return 1;
	return 0;
}

int main(){
	char items[20][20], plu[20][20], s[25];
	int L, N, i;
	cin >> L >> N;
	for (i = 0; i < L; i++) cin >> items[i] >> plu[i];

	while(N--){
		cin >> s;
		int flag = 0, end = strlen(s) - 1;
		for (i = 0; i < L; ++i) 
			if (!strcmp(s, items[i])) {
				puts(plu[i]), flag++;
				break;	
			}

		if (flag) continue;
		else if (s[end] == 'y' && !cmp("aeiou", s[end - 1])) strcpy(&s[end],"ies"), printf("%s\n", s);
		else if (cmp("osx", s[end]) || (cmp("cs", s[end - 1]) && s[end] == 'h')) printf("%ses\n", s);
		else printf("%ss\n", s);
	}
}
