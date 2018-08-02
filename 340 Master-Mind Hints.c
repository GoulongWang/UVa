#include<stdio.h>
int main(){
	unsigned n, ans[1005], guess[1005], cnt;
	while(scanf("%u", &n) && n){
		printf("Game %d:\n", ++cnt);
		for (int i = 0; i < n; i++) scanf("%u", &ans[i]);	

		while(1){
			unsigned A = 0, B = 0, checkAns[1005] = {0}, checkGue[1005] = {0};
			for (int i = 0; i < n; i++) {
				scanf("%u", &guess[i]);
				if (ans[i] == guess[i]) A++, checkAns[i] = 1, checkGue[i] = 1;	
			}

			if (!guess[0]) break;

			for (int i = 0; i < n; i++) {
				if (checkAns[i]) continue;
				for (int j = 0; j < n; j++){
					if (checkGue[j]) continue;
					// 當位置不同但值相同，且答案和猜測的數字都沒有被檢查過，則 B++
					if (i != j && ans[i] == guess[j] && !checkAns[i] && !checkGue[j])
						B++, checkAns[i] = 1, checkGue[j] = 1;	
				}
			}

			printf("    (%u,%u)\n", A, B);
		}
	}

	return 0;
}
