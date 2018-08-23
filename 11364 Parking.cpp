#include<iostream>
using namespace std;
int main(){
	unsigned t;
	cin >> t;
	while(t--){
		unsigned min = 100, max = 0, n, store;
		cin >> n;
		while(n--) {
			cin >> store;
			if (store > max) max = store;
			if (store < min) min = store;
		} 
		cout << 2 * (max - min) << endl;
	}
}
