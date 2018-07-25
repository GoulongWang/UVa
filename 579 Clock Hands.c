#include<stdio.h>
int main(){
	unsigned hour, min;
	char colon;

	while(scanf("%u %c%u", &hour, &colon, &min) && (hour || min)){
		double HD = hour * 30 + min * 0.5, MD = min * 6;
		if (HD >= MD) printf("%.3f\n", HD - MD <= 180 ? HD - MD: 360 - HD + MD);
		else printf("%.3f\n", MD - HD <= 180 ? MD - HD: 360 - MD + HD);
	}

	return 0;
}
