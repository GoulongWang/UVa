#include <stdio.h>
int main(){
	int digit, i, two[] = {0, 1, 81}, 
		four[] = {0, 1, 2025, 3025, 9801}, 
		six[] = {0, 1, 88209, 494209, 998001}, 
		eight[] = {0, 1, 4941729, 7441984, 24502500, 25502500, 52881984, 60481729, 99980001};

	while(scanf("%d", &digit) != EOF){
		if (digit == 2) for (i = 0; i < 3; i++) printf("%02d\n", two[i]);
		else if (digit == 4) for (i = 0; i < 5; i++) printf("%04d\n", four[i]);
		else if (digit == 6) for (i = 0; i < 5; i++) printf("%06d\n", six[i]);
		else if (digit == 8) for (i = 0; i < 9; i++) printf("%08d\n", eight[i]);
	}

	return 0;
}

/*
這題可以先寫一個小程式把 2、4、6、8 位數的所有 quirksome number 找出來，然後再建表，剩下就照題目敘述輸出即可
*/
