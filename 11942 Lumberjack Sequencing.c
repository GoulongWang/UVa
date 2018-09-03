#include <stdio.h>
int main(){
	int t;
	puts("Lumberjacks:");
	scanf("%d", &t);
	while(t--){
		int ordered = 1, num[10];
		for (int i = 0; i < 10; i++) scanf("%d", &num[i]);
		for (int i = 2; i < 10; i++)
			if (num[i] > num[i - 1] ^ num[i - 1] > num[i - 2]){
				ordered = 0;
				break;
			}

		puts(ordered? "Ordered": "Unordered");
	}
	return 0;
}

/*
1. 使用 XOR 的概念去判斷數列是否有排序，XOR 是日常生活中會用到的邏輯。例如 : 我五點要去小明家或小美家。 你只會去其中一個人家，不可能兩個人的家都去(TURE * 2)，也不可能都沒有去(FALSE * 2)。
   所以判斷遞增數列 1 2 3: 判斷 3 > 2、 2 > 1，再把 2 個 true 做 XOR，則等於 false (代表排序過) 
   反之判斷遞減數列 3 2 1: 判斷 1 > 2、 2 > 3，再把 2 個 false 做 XOR，則等於 false (代表排序過)
*/
