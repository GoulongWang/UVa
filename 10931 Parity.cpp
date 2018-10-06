#include <iostream>
using namespace std;
int main(){
	int I;
	while(cin >> I && I){
		int cnt = 0, binary[32] = {0}, i;
		for (i = 0; I; i++) binary[i] = I % 2, cnt += I % 2, I /= 2;
		cout << "The parity of ";
		for (--i; i >= 0; i--) cout << binary[i];
		cout << " is " << cnt << " (mod 2).\n";
	}
}
