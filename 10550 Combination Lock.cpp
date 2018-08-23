#include<iostream>
using namespace std;
int main(){
	unsigned dial, n1, n2, n3;
	while(cin >> dial >> n1 >> n2 >> n3 && dial + n1 + n2 + n3){
		unsigned moves = (n1 > dial? dial + 40 - n1: dial - n1) + 
		                 (n2 >= n1? n2 - n1: 40 - n1 + n2) + 
		                 (n3 > n2? n2 + 40 - n3: n2 - n3);
		cout << 1080 + 9 * moves << endl;
	}
}
