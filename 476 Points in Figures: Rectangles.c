#include<stdio.h>
int main(){
	int cnt = 0, point = 0;
	char r;
	float x, y, X[10], Y[10], X2[10], Y2[10];
	while(scanf(" %c", &r)){
		if(r == '*') break;
		scanf("%f%f%f%f", &X[cnt], &Y[cnt], &X2[cnt], &Y2[cnt]);
		cnt++;
	}
	
	while(scanf("%f%f", &x, &y)){
		if(x == (float)9999.9 && y == (float)9999.9) break;
		int inRect = 0;
		point++;
		for(int i = 0; i <= cnt; i++)
			if(x > X[i] && x < X2[i] && y < Y[i] && y > Y2[i]){
				inRect = 1;
				printf("Point %d is contained in figure %d\n", point, i + 1);
			}

		if(!inRect) printf("Point %d is not contained in any figure\n", point);
	}

	return 0;
}
