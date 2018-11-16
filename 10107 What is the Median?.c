#include<stdio.h>
unsigned num[10001] = {0};
int main() {
	int cnt = -1, input, i;
	while(scanf("%d", &input) != EOF) {
		for(i = cnt; i >= 0; i--)
			if(num[i] > input) num[i + 1] = num[i];
			else break;
		num[i + 1] = input, cnt++;
		printf("%u\n", cnt & 1? (num[cnt/2] + num[cnt/2 + 1]) / 2: num[cnt/2]);
	}
}
