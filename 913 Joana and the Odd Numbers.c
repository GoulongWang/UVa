#include<stdio.h>
int main(){
	long long n;
	while(scanf("%lld", &n) != EOF) printf("%lld\n", 6 * (n + 1) * (n + 1) / 4 - 9);
	return 0;
}

/*
備註 : 
1. 此題計算平方不能用 pow() 來算，因為輸出的型態是 long long，pow() 只有精確到 double，所以會產生誤差
2. 記得格式化輸入輸出要換成 %lld
3. 程式碼是經過化簡、化簡再化簡，才得出那麼短的式子，算法請參考註解
*/

/*
(1)
計算總共有幾個奇數
1 + 3 + 5 + .. + n = 全部的奇數個數
(不能用迴圈相加，因為這樣會超時，所以要用數學的方式計算)

連續奇數相加和 = (數列個數)^2 = 全部的奇數個數
# 可用正方形的概念來證明，網路上有簡報檔

數列個數 = (末項 - 首相) / 公差 + 1 = (n - 1) / 2 + 1 = (n - 1) / 2 + 2 / 2 = (n + 1) / 2

所以，全部的奇數個數 = ((n + 1) / 2)^2 = (n + 1) * (n + 1) / 4

(2)
最後 3 個數相加 = 等差中項 * 3，運用等差數列概念
等差中項 = A(n-1) = 1 + (n - 2) * 2 = 2n - 3	
最後 3 個數相加 = 3 * (2n - 3) = 6n - 9	

(3)
結合 (1) 和 (2) 的結論，最後 3 個項之和 = 6n - 9	= 6 * (n + 1) * (n + 1) / 4 - 9
*/
