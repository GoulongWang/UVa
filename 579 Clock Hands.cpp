#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	unsigned hour, min;
	char colon;

	while(cin >> hour >> colon >> min && (hour || min)){
		double HD = hour * 30 + min * 0.5, MD = min * 6;
		if (HD >= MD) cout << setiosflags(ios::fixed) <<  setprecision(3) << (HD - MD <= 180 ? HD - MD: 360 - HD + MD) << endl;
		else cout << setiosflags(ios::fixed) << setprecision(3) << (MD - HD <= 180 ? MD - HD: 360 - MD + HD) << endl;
	}
	
	return 0;
}
