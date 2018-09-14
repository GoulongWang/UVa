#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long s;
		scanf("%lld", &s);
		printf("%lld\n", s * (s + 2));
	}
	return 0;
}

/*
此題有運用到微積分級數與數列那章節的技巧
需要化簡題目敘述找出規律後，答案就秒殺了

An = 1 / (sqrt(n) + sqrt(n + 1)) = sqrt(n + 1) - sqrt(n)

S = (√2 - √1) + (√3 - √2) + (√4 - √3) + (√5 - √4) + ... + (√n - √(n-1)) + (√(n+1) - √n)
  = √(n + 1) - 1
所以 n = (S + 1)^2 - 1 = S^2 + 2S + 1 - 1 = S(S + 2)
*/
