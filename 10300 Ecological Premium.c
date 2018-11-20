#include<stdio.h>
int main(){
	int n;
	for (scanf("%d", &n); n; n--){
		long sum = 0, f, a, num, l;
		scanf("%ld", &f);
		while(f--) scanf("%ld%ld%ld", &a, &num, &l), sum += a * l;
		printf("%ld\n", sum);
	}
}
