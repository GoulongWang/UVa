#include<stdio.h>
#include<math.h>
int main(){
	long n, root;
	while(scanf("%ld", &n) && n && (root = sqrt(n)))
		printf("%s\n", root * root == n? "yes": "no");
	return 0;
}

/*
1. n > 0 時才會進入迴圈
2. root = sqrt(n) 放在條件式裡面只是為了節省行數而已，也可以放在迴圈裡面，
   只不過放進去要記得加上括號，要不然會錯，因為運算子優先順序的關係
3. 完全平方數的因數個數一定是奇數，證明請參考連結
   https://blog.csdn.net/yew1eb/article/details/9183101
*/
