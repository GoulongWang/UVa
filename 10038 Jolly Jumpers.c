#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		int flag = 1, prev, nums[3010], jolly[3010] = {0};
		for (int i = 1; i <= n; i++) scanf("%d", &nums[i]);
		for (int i = 1; i < n; i++){
			int D = abs(nums[i] - nums[i + 1]);
			if (D > n - 1 || D == 0 || jolly[D]) {
				puts("Not jolly"), flag = 0;
				break;	
			}
			jolly[D] = 1;
		}
		if(flag) puts("Jolly");
	}
	return 0;
}
