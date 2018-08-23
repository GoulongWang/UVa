#include<stdio.h>
int main(){
	unsigned dial, n1, n2, n3;
	while(scanf("%u%u%u%u", &dial, &n1, &n2, &n3) && dial + n1 + n2 + n3){
		unsigned moves = (n1 > dial? dial + 40 - n1: dial - n1) + 
		                 (n2 >= n1? n2 - n1: 40 - n1 + n2) + 
		                 (n3 > n2? n2 + 40 - n3: n2 - n3);
		printf("%u\n", 1080 + moves * 9);
	}
	return 0;
}

/*
陷阱 : 順時針轉數字鎖的時候，數字卻是會逆時針轉動的，所以把它反向思考成時鐘即可
*/
