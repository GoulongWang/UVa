#include<stdio.h>
int main(){
	int n, height, freq;
	scanf("%d", &n);
	while(n--){
		scanf("%d%d", &height, &freq);
		for(int i = 1; i <= freq; i++){
			for(int j = 1; j <= height; j++){
				for(int z = 1; z <= j; z++) printf("%d", j);
				puts("");	
			}
			for(int j = height - 1; j >= 1; j--){
				for(int z = 1; z <= j; z++) printf("%d", j);
				puts("");
			}
			if(!(n == 0 && i == freq)) puts("");
		}
	}
	return 0;
}
