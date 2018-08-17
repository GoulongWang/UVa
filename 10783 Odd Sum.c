#include<stdio.h>
int main(){
	unsigned T, a, b, cnt = 0;
	scanf("%u", &T);
	while(T--){
		unsigned sum = 0;
		scanf("%u%u", &a, &b);
		for (int i = a; i <= b; i++) if(i % 2) sum += i;
		printf("Case %u: %u\n", ++cnt, sum);
	}

	return 0;
}
