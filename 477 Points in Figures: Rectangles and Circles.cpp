#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int cnt = 0, point = 0;
	char type[10];
	float x, y, X[10], Y[10], X2[10], Y2[10], CX[10], CY[10], R[10];
	
	while(cin >> type[cnt] && type[cnt] != '*'){
		if(type[cnt] == 'c') cin >> CX[cnt] >> CY[cnt] >> R[cnt];
		else if(type[cnt] == 'r') cin >> X[cnt] >> Y[cnt] >> X2[cnt] >> Y2[cnt];
		cnt++;		
	}
	
	while(cin >> x >> y && x != (float)9999.9 && y != (float)9999.9){
		int infigure = 0;
		point++;
		for(int i = 0; i <= cnt; i++){
			if (type[i] == 'r'){
				if(x > X[i] && x < X2[i] && y < Y[i] && y > Y2[i]){
					infigure++;
					cout << "Point " << point << " is contained in figure " << i + 1 << "\n";
				}
			}else if (type[i] == 'c')
				if (sqrt(pow(x - CX[i], 2) + pow(y - CY[i], 2)) < R[i]){
					cout << "Point " << point << " is contained in figure " << i + 1 << "\n";
					infigure++;
				}	
		}
			
		if(!infigure) cout << "Point " << point << " is not contained in any figure\n";
	}
}
