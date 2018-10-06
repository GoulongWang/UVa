#include <stdio.h>
int main(){
	long n, m;
	while(scanf("%ld%ld", &n, &m) != EOF){
		int k = 0, num[100] = {0};
		while(n > 1 && m > 1 && n % m == 0) num[++k] = n, n /= m;

		if(n == 1 && k != 0){
			for (int i = 1; i <= k; i++) printf("%d ", num[i]);
			puts("1");
		} else puts("Boring!");
	}
	return 0;
}

/*
1. 題目騙人，輸入數字會超過　int　範圍，故需使用　long
2. 在寫這題的時候，遇到了一個編譯錯誤 : Floating point exception
   會發生這種情況是因為對 0 取 mod
3. 1 1 => 按照題目規則寫的，會有無限多個
   1 0
   0 0
   0 1
   10 20 => 很明顯 10 % 20 != 0
   123 0 => 不能除 0
   123 1 => 公比要大於一
   上面這些情況都是 Boring!
*/
