#include<stdio.h>
int main(){
	unsigned T;
	scanf("%u", &T);
	while(T--){
		unsigned N, freq[10] = {0}, i;
		scanf("%u", &N);
		for (i = N; i > 0; i--) {
			int temp = i;
			while(temp) freq[temp % 10]++, temp /= 10;
		}
		for (i = 0; i < 9; i++) printf("%u ", freq[i]); printf("%u\n", freq[9]);
	}

	return 0;
}
