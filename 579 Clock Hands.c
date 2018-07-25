#include<stdio.h>
#include<math.h>
int main(){
	unsigned hour, min;

	while(scanf("%u:%u", &hour, &min) && (hour || min)){
		double HD = hour * 30 + min * 0.5, MD = min * 6, angle = fabs(HD - MD);
		printf("%.3f\n", angle > 180? 360 - angle: angle);
	}

	return 0;
}
