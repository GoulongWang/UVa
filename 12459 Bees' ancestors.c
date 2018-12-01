#include <stdio.h>
int main(){
	int n;
	long long ans[81] = {0, 1, 2};
	for (int i = 3; i <= 80; ++i) ans[i] = ans[i - 1] + ans[i - 2];
	while(scanf("%d", &n) && n) printf("%llu\n", ans[n]);	
	return 0;
}

/*
法一 : 
let male(x) = the number of male in x generation, 
    female(x) = the number of female in x generation

由題目已知 : 
1. 雄蜂和雌蜂都有媽媽 : female(x) = male(x - 1) + female(x - 1)
2. 只有雄蜂沒有爸爸 => 只有雌蜂有爸爸 : male(x) = female(x - 1)

所以 female(x) = male(x - 1) + female(x - 1)
               = female(x - 2) + female(x - 1)

法二 : 
1
2 => 第一代，共 1 個祖先
12 => 第二代，共 2 個祖先
212 => 第三代，共 3 個祖先
12212 => 第四代，共 5 個祖先
21212212 => 第五代，共 8 個祖先

若仔細觀察每一代的結果，即可發現為 Fibonacci sequence
故第 n 代數量 = 第 n - 1 代數量 + 第 n - 2 代數量
=> f(n) = f(n - 1) + f(n - 2); f(1) = 1; f(2) = 2;
*/
