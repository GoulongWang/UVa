#include <stdio.h>
int main(){
	int t, cnt = 0;
	scanf("%d", &t);
	while(t--){
		int n, age[9] = {0};
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &age[i]);
		printf("Case %d: %d\n", ++cnt, age[n / 2]);
	}
	return 0;
}
