#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		int side[4];
		cin >> side[0] >> side[1] >> side[2] >> side[3];
		sort(side, side + 4);
		
		if(side[0] == side[3]) cout << "square\n";
		else if(side[0] == side[1] && side[2] == side[3]) cout << "rectangle\n";
		else if(side[3] >= side[0] + side[1] + side[2]) cout << "banana\n";
		else cout << "quadrangle\n";
	}
}
