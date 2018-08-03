#include<stdio.h>
#include<string.h>
unsigned Generator[100001];
int main(){
	unsigned T, n;
	memset(Generator, 0, sizeof(Generator));
	
	for (int i = 1; i < 100001; i++){
		int N = i, sum = i;
		while(N) sum += N % 10, N /= 10;
		if (Generator[sum] == 0) Generator[sum] = i;
	}

	scanf("%u", &T);
	while(T--) scanf("%u", &n), printf("%d\n", Generator[n]);
	return 0;
}

/*
1. 要求求出的是最小生成元，也就意味著在存入 Generator[sum] 之前要先判斷是否為最小生成元
   存入前先判斷 Generator[sum] 有沒有已經存過 Smallest Digit Generator
   如果 Generator[sum] == 0 代表還沒有存過
   
   若沒判斷是否存過 Smallest Digit Generator，會變成以下情況 :
   i = 198, sum = 216, Generator[216] = 198
   i = 207, sum = 216, Generator[216] = 207 <= Smallest Digit Generator　被覆蓋了
   原本存入的 Smallest Digit Generator 會被另外一個生成元(Not the smallest one)覆蓋掉
   
2. 無解時輸出 0，代表剛開始就要把 Generator[100001] 全都歸零(初始化為無解)，這樣輸出時就直接輸出 Generator[n] 即可
*/
