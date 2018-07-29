#include<stdio.h>
#include<math.h>
int main(){
	int N, cnt = 0;	
	while(scanf("%d", &N), N > 0) printf("Case %d: %d\n", ++cnt, (int)ceil(log(N) / log(2)));
	return 0;
}

// C 不能用 log2() 來算，所以改用換底公式就可以過了
