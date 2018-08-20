#include<stdio.h>
int main(){
	int t, s, d;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &s, &d);
		s < d || (s - d) % 2? puts("impossible"): printf("%d %d\n", (s + d) / 2, (s - d) / 2);
	}
	return 0;
}

/*
1. a + b = c
   a - b = c2

   2a = c + c2
   2b = c - c2

   所以 2a 和 2b 都是偶數，判斷其中一個即可。

2. a 和 b 同奇偶

3. s 一定大於 d，因為 s 是原始分數的總和
*/
