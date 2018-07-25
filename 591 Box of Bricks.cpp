#include<iostream>
#include<cstdio>
int main(){
	unsigned n, cnt = 0;
	while(scanf("%u", &n) && n){
		int *stack = new int[n], sum = 0, move = 0, i;

		for (i = 0; i < n; i++) {
			scanf("%d", stack + i);
			sum += stack[i];
		}

		int height = sum / n;
		for (i = 0; i < n; i++) if (stack[i] > height) move += stack[i] - height;
		printf("Set #%u\nThe minimum number of moves is %d.\n\n", ++cnt, move);
	}
}
