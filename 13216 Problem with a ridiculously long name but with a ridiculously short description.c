#include <stdio.h>
#include <string.h>
int main(){
	int t, ans[] = {76, 16, 56, 96, 36};	
	for(scanf("%d", &t); t; t--){
		char s[50];
		scanf("%s", s);
		if (strlen(s) == 1 && s[0] == '0') puts("1");
		else if (strlen(s) == 1 && s[0] == '1') puts("66");
		else printf("%d\n", ans[(s[strlen(s) - 1] - '0') % 5]);	
	}
	return 0;
}

/*
題目所求 66^n % 100 = ?
這題不可能用暴力算開，一定會超時，而且 n 的長度已經超過 unsigned long long 所能表示的範圍了，
所以要找出規律即可解出。

66^n = (60 + 6)^n => 用二項式定理展開 => 60^n + n * 60^(n-1) * 6 + ... + [n * 60 * 6^(n-1) + 6^n]
展開之後即可知 66^n % 100 可以化簡成 [n * 60 * 6^(n-1) + 6^n] % 100

代數字進去看看是否能找出甚麼規律 : 
n = 1 : [60 + 6] % 100
n = 2 : [720 + 6^2] % 100
n = 3 : [6480 + 6^3] % 100
n = 4 : [51840 + 6^4] % 100

補充數學小知識 : 6^n 的個位數一定是 6
由此可推知 66^n 的個位數字一定是 6

原本 mod 100 的答案會有 100 種，但現在知道個位數一定是 6 之後，答案只剩下十種可能。
可以用程式(用 python 比較方便)或計算機跑一下 n = 0 ~ n = 12 的結果，看看有甚麼規律

1，66，56，96，36，76，16，56，96，36，76，16, ...

稍微整理一下
(1，66，56，96，36)，[76，16，56，96，36]，[76，16, ...]
可以看到 [] 中為一組規律每 5 個數一循還，但是 n = 0 和 n = 1 卻沒有在規律當中

所以只要把 n % 5 然後排除 n = 0 和 n = 1 的情況，即可解出答案
另外因為 n 是大數，所以其實只要看 個位數 % 5 是多少就可以了
剩下的部分看程式應該就懂了
*/
