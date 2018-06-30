#include<iostream>
using namespace std;
int main(){
	int cnt = 0, point = 0;
	char r;
	float x, y, X[10], Y[10], X2[10], Y2[10];
	while(cin >> r){
		if(r == '*') break;
		cin >> X[cnt] >> Y[cnt] >> X2[cnt] >> Y2[cnt];
		cnt++;
	}
	
	while(cin >> x >> y){
		if(x == (float)9999.9 && y == (float)9999.9) break;
		int inRect = 0;
		point++;
		for(int i = 0; i <= cnt; i++)
			if(x > X[i] && x < X2[i] && y < Y[i] && y > Y2[i]){
				inRect = 1;
				cout << "Point " << point << " is contained in figure " << i + 1 << "\n";
			}
			
		if(!inRect) cout << "Point " << point << " is not contained in any figure\n";
	}
}
