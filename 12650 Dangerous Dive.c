#include <stdio.h>
int main(){
	int N, R;
	while(scanf("%d%d", &N, &R) != EOF){
		int num, NUM[1002] = {0}, i = R;
		while(i--) scanf("%d", &num), NUM[num]++;
		if (N == R) printf("*");
		else for (int i = 1; i <= N; i++) if (!NUM[i]) printf("%d ", i); 
		puts("");
	}
	return 0;
}
