#include <stdio.h>
int main() {
	int t;
	while (scanf("%d", &t) != EOF && t){
		int up = 1, n = 2, w = 3;
		while(t--){
			int tmp = up;
			char str[6];
			scanf("%s", str);
			
			if (str[0] == 'n') up = 7 - n, n = tmp;
			else if(str[0] == 's') up = n, n = 7 - tmp;
			else if(str[0] == 'e') up = w, w = 7 - tmp;
			else if(str[0] == 'w') up = 7 - w, w = tmp;
		}
		printf("%d\n", up);
	}
	return 0;
}

/*
1. 只需要記上、北、西的數字即可，因為其他方向可以用推的算出來
*/
