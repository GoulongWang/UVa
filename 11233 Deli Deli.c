#include <stdio.h>
#include <string.h>
int cmp(char *str, char letter){
	for (int i = 0; str[i]; i++) if (str[i] == letter) return 1;
	return 0;
}

int main(){
	char items[20][20], plu[20][20], s[25];
	int L, N, i;
	scanf("%d%d", &L, &N);
	for (i = 0; i < L; i++) scanf("%s%s", &items[i], &plu[i]);

	while(N--){
		scanf("%s", s);
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
	return 0;
}

/*
1. y 前面如果是母音 a, e, i, o, u 則直接 + s，不過這題測資其實有小 bug，它沒有包含 iy, uy 結尾的字
2. strcpy(&s[end],"ies") 代表複製 "ies" 到 &s[end] 的位置，從 &s[end] 之後的內容都會被覆蓋掉，可自行寫小程式測試
*/
