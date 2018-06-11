#include <stdio.h>
int length(int n){
    int length = 0;
    while(n > 1){
        length++;
        if(n % 2 == 1) n = 3 * n + 1;
        else n /= 2;
    }
    return length + 1;
}

int main(){
	int i, j, a, max = 0;
	while(scanf("%d %d", &i, &j) != EOF){
	    printf("%d %d ", i, j);
	    if(i > j){
	        int temp = i;
	        i = j;
	        j =temp;
	    }
	    
		for (a = i; a <= j; a++) if (length(a) >= max) max = length(a);
		printf("%d\n", max);
		max = 0;
	}
	return 0;
}
