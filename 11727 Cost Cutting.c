#include<stdio.h>
int main(){
	unsigned t, temp, cnt = 0, n1, n2, n3;
	scanf("%u", &t);
	while(t--){
		scanf("%u%u%u", &n1, &n2, &n3);
		if (n1 > n2) temp = n1, n1 = n2, n2 = temp;
		if (n2 > n3) temp = n2, n2 = n3, n3 = temp;
		if (n1 > n2) temp = n1, n1 = n2, n2 = temp;
		printf("Case %u: %u\n", ++cnt, n2);
	}
	return 0;
}
