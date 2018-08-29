#include <stdio.h>
int main(){
	int t, cnt = 0;
	scanf("%d", &t);
	while(t--){
		int high = 0, low = 0, wall, h, pre;
		scanf("%d%d", &wall, &pre), wall--;
		while(wall--) {
			scanf("%d", &h);
			if (h > pre) high++;
			else if (h < pre) low++;
			pre = h;
		}
		printf("Case %d: %d %d\n", ++cnt, high, low);
	}
	return 0;
}
