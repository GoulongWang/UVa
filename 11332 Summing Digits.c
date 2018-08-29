#include <stdio.h>
int g(int N){
	int sum = 0;
	while(N) sum += N % 10, N /= 10;
	return sum < 10? sum: g(sum);
}

int main(){
	int n;
	while(scanf("%d", &n) && n) printf("%d\n", g(n));
	return 0;
}
