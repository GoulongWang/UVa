#include <stdio.h>
int main(){
	int t, l, w, h, cnt = 0;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d", &l, &w, &h);
		printf("Case %d: %s\n", ++cnt, l > 20 || w > 20 || h > 20? "bad": "good");
	}
	return 0;
}
