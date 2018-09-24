#include <stdio.h>
#include <math.h>
int main(){
	double a, pi = 4 * atan(1);
	while(scanf("%lf", &a) != EOF){
		double z = a * a * (1 - sqrt(3) / 4 - pi / 6) ,
			   y = a * a* (1 - pi / 4) - 2 * z,
			   x = a * a - 4 * (z + y);
	    printf("%.3lf %.3lf %.3lf\n", x, 4 * y, 4 * z);
	}
	return 0;
}

/*
解法參考 : 
https://blog.csdn.net/zhang20072844/article/details/6841336
http://lbv-pc.blogspot.com/2012/11/is-this-integration.html

稍微有難度的數學問題，需要畫輔助線才能觀察出來。
*/
