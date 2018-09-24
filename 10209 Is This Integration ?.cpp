#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
	double a, pi = 4 * atan(1);
	while(cin >> a){
		double z = a * a * (1 - sqrt(3) / 4 - pi / 6) ,
			   y = a * a* (1 - pi / 4) - 2 * z,
			   x = a * a - 4 * (z + y);
	    printf("%.3lf %.3lf %.3lf\n", x, 4 * y, 4 * z);
	}
}
