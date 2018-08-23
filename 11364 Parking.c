#include<stdio.h>
int main(){
	unsigned t;
	scanf("%u", &t);
	while(t--){
		unsigned min = 100, max = 0, n, store;
		scanf("%u", &n);
		while(n--) {
			scanf("%u", &store);
			if (store > max) max = store;
			if (store < min) min = store;
		} 
		printf("%u\n", 2 * (max - min));
	}
	return 0;
}
