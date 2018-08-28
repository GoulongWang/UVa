#include <stdio.h>
#include <stdlib.h>
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%d\n", abs(315 * n + 36962) / 10 % 10);
	}
	return 0;
}

/*
1. 把題目給的敘述經過化簡整理之後
   (n * 567 / 9 + 7492) * 235 / 47 - 498 = 315 * n + 36962
*/
