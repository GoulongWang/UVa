#include <stdio.h>
int happyNum(int N){
	int sum = 0;
	while(N) sum += (N % 10) * (N % 10), N /= 10;
	return sum < 10? sum == 1 || sum == 7? 1: 0: happyNum(sum);
}

int main(){
	int t, n;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++){
		scanf("%d", &n);
		printf("Case #%d: %d is ", i, n);
		puts(happyNum(n)? "a Happy number.": "an Unhappy number.");
	}
	return 0;
}
