#include <stdio.h>
#include <math.h>
int prime(int N){
	for (int i = 2; i <= sqrt(N); i++) if (N % i == 0) return 0;
	return 1;
}

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		int r = 0, temp = n;
		while(temp) r = r * 10 + temp % 10, temp /= 10;		
		if (!prime(n)) printf("%d is not prime.\n", n);
		else if (prime(n) && prime(r) && n != r) printf("%d is emirp.\n", n);
		else printf("%d is prime.\n", n);
	}
	return 0;
}
