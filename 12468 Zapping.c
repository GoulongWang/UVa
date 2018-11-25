#include <stdio.h>
int main(){
	int a, b, c;
	while(scanf("%d%d", &a, &b) && a > -1)
		c = abs(a - b), printf("%d\n", c < 50? c: 100 - c);
	return 0;
}
