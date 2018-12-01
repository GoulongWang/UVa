#include <stdio.h>
int main(){
	int t, cnt = 0;
	for (scanf("%d", &t); t; t--){
		int cnt2 = 0, n;
		char field[101];
		scanf("%d%s", &n, field);
		for (int i = 0; i < n;) field[i] == '#'? i++: (i += 3, cnt2++);
		printf("Case %d: %d\n", ++cnt, cnt2);
	}
	return 0;
}

/*
從最左邊開始數，每三個為一組 (i, i + 1, i + 2)，若 i 是不毛之地則跳過
*/
