#include<stdio.h>
int main(){
	int n1, n2;
	while(scanf("%d%d", &n1, &n2) && (n1 || n2)){
		int carry = 0, cnt = 0;
		// 當 n1 和 n2 都變成 0 時才會結束迴圈
		while(n1 || n2){
			carry += n1 % 10 + n2 % 10; // 把每個位數和進位加起來
			carry /= 10;
			n1 /= 10, n2 /= 10; // 前進計算下一位，e.g. 10"0" -> 1"0"
			if(carry) cnt++;
		}
		if(cnt == 0) puts("No carry operation.");
		else if(cnt == 1) puts("1 carry operation.");
		else printf("%d carry operations.\n", cnt);
	}
	return 0;	
}

/*
(n1 || n2) 
如果 n1 和 n2 都是 0，那麼結果會是 0，就會跳出 while
如果 n1 和 n2 其中一個是 0，那麼結果會是 1，繼續執行 while
*/
