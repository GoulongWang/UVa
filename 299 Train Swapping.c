#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, num[50] = {0}, cnt = 0, tmp, i, j;
		scanf("%d", &n);
		for (i = 0; i < n; i++) scanf("%d", &num[i]);
		for (i = 1; i < n; i++)
			for (j = 0; j < n - i; j++)
				if (num[j] > num[j + 1])
					tmp = num[j], num[j] = num[j + 1], num[j + 1] = tmp, cnt++;

		printf("Optimal train swapping takes %d swaps.\n", cnt);
	}
	return 0;
}

/*
1. 計算 Bubble Sort 的交換次數即為答案
2. 網路上有找到另一種解法，稱作 "逆序數"。 此題其實是在計算逆序數，
   不過有點不太懂為何逆序數就等於 Bubble Sort 的交換次數，因此還是繼續用原本的解法

逆序數 : https://blog.csdn.net/mobius_strip/article/details/39252573
逆序數2 : https://blog.csdn.net/MoreWindows/article/details/8029996
*/
