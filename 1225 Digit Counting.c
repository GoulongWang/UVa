#include<stdio.h>
void count(unsigned n, unsigned* FREQ){
	while(n) FREQ[n % 10]++, n /= 10;
}

int main(){
	unsigned T;
	scanf("%u", &T);
	while(T--){
		unsigned N, freq[10] = {0}, i;
		scanf("%u", &N);
		for (i = N; i > 0; i--) count(i, freq);
		for (i = 0; i < 9; i++) printf("%u ", freq[i]); printf("%u\n", freq[9]);
	}

	return 0;
}
