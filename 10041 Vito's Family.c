#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
	return *(int*)a - *(int*)b;
}

int main(){
	unsigned t, r;
	scanf("%u", &t);
	while(t--){
		scanf("%u", &r);
		int *street = malloc(4 * r), i;
		for (i = 0; i < r; i++) scanf("%u", &street[i]);
		qsort(street, r, 4, cmp);

		int mid = street[r / 2], d = 0;
		for (i = 0; i < r; i++) d += abs(street[i] - mid);
		printf("%d\n", d);	
	}

	return 0;
}

/*
從中位數到每個親戚家的距離總和最小，而不是取中間數 (最大數 + 最小數) / 2
*/
