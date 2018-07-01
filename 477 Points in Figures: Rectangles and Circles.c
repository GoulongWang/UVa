#include<stdio.h>
#include<math.h>
int main(){
	int cnt = 0, point = 0;
	char type[10];
	float x, y, X[10], Y[10], X2[10], Y2[10], CX[10], CY[10], R[10];
	while(scanf(" %c", &type[cnt]) && type[cnt] != '*'){
		if(type[cnt] == 'c') scanf("%f%f%f", &CX[cnt], &CY[cnt], &R[cnt]);
		else if(type[cnt] == 'r') scanf("%f%f%f%f", &X[cnt], &Y[cnt], &X2[cnt], &Y2[cnt]);
		cnt++;		
	}
	
	while(scanf("%f%f", &x, &y) && x != (float)9999.9 && y != (float)9999.9){
		int infigure = 0;
		point++;
		for(int i = 0; i <= cnt; i++){
			if (type[i] == 'r'){
				if(x > X[i] && x < X2[i] && y < Y[i] && y > Y2[i]){
					infigure++;
					printf("Point %d is contained in figure %d\n", point, i + 1);
				}
			}else if (type[i] == 'c')
				if (sqrt(pow(x - CX[i], 2) + pow(y - CY[i], 2)) < R[i]){
					printf("Point %d is contained in figure %d\n", point, i + 1);
					infigure++;
				}	
		}
			
		if(!infigure) printf("Point %d is not contained in any figure\n", point);
	}

	return 0;
}
