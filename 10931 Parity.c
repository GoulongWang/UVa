#include <stdio.h>
int main(){
	int I;
	while(scanf("%d", &I) && I){
		int cnt = 0, binary[32] = {0}, i;
		for (i = 0; I; i++) binary[i] = I % 2, cnt += I % 2, I /= 2;
		printf("The parity of ");
		for (--i; i >= 0; i--) printf("%d", binary[i]);
		printf(" is %d (mod 2).\n", cnt);
	}
	return 0;
}

/*
短除法轉換二進位
e.g. 20 = (10100)2

2)20
2)10 ... 0 (2^0)
2) 5 ... 0 (2^1)
2) 2 ... 1 (2^2)
2) 1 ... 0 (2^3)
2) 0 ... 1 (2^4)

1. 把所有餘數相加就可以算出總共有多少個 1
2. 用 Array 存餘數，即二進位的每一位(從低位元至高位元)
3. 當 I == 0 時，結束迴圈
*/
