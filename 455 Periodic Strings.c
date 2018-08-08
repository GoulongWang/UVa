#include<stdio.h>
#include<string.h>
int isPeriodic(unsigned I, char* str){
	for(int i = 1; i < strlen(str) / I; i++)
		for (int j = I * i; j <= I - 1 + I * i; j++) if (str[j] != str[j % I]) return 0;
	return 1;
}

int main(){
	unsigned T, i;
	scanf("%u", &T);
	while(T--){
		char s[85];
		scanf("%s", s);
		for (i = 1; i <= strlen(s); i++) if (!(strlen(s) % i) && isPeriodic(i, s)) break;
		printf("%u\n", i);
		if (T) puts("");				
	}

	return 0;
}

/*
1. 第一個迴圈是先判斷週期長度 i 是否為字串長度的因數，例如 : aaa，週期長度不可能是 2，因為 2 不是 3 的因數。
2. 再來是用 isPeriodic(i, s) 來判斷週期長度 i 是否為字串 s 的最小週期。
3. isPeriodic() 中，外層迴圈代表有多少組 (字串長度 / 週期)，然後不用跟第 0 組 (第一個週期) 比較，所以直接從第 1 組 (第二個週期) 開始比較；
   內層迴圈是控制第 i 組的第 j 個字。
4. 第一個週期的 index 一定是 0 ~ (I - 1)，那第二個週期 (i = 1) 就是 (0 + I) ~ (I - 1 + I)，
   第三個週期 (i = 2) 就是 (0 + I * 2) ~ (I - 1 + I * 2)，之後的週期依此類推就是 (0 + I * i) ~ (I - 1 + I * i) => (I * i) ~ (I - 1 + I * i)
   所以比對的時候只要比對 str[j] 和 str[j % I] 是否一樣即可
5. str[j] 是目前比對的位置，str[j % I] 是第一個週期的對應位置
*/
