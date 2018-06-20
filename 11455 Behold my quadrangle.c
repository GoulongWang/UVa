#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b){
	return *(int*)a - *(int*)b;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int side[4];
		scanf("%d%d%d%d", &side[0], &side[1], &side[2], &side[3]);
		qsort(side, 4, 4, cmp);
		
		if(side[0] == side[3]) printf("square\n");
		else if(side[0] == side[1] && side[2] == side[3]) printf("rectangle\n");
		else if(side[3] >= side[0] + side[1] + side[2]) printf("banana\n");
		else printf("quadrangle\n");
	}
	return 0;	
}
