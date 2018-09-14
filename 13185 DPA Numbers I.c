#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int sum = 0, n;
		scanf("%d", &n);
		for (int i = 1; i <= n / 2; i++) if (!(n % i)) sum += i;
		if (sum < n) puts("deficient");
		else if (sum == n) puts("perfect");
		else puts("abundant");
	}
	return 0;
}
