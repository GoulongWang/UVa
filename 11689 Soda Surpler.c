#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int e, f, c;
		scanf("%d%d%d", &e, &f, &c);
		int cnt = 0, empty = e + f;
		while(empty / c) cnt += empty / c, empty = empty / c + empty % c;
		printf("%d\n", cnt);
	}
	return 0;
}
