#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	unsigned t, r;
	cin >> t;
	while(t--){
		cin >> r;
		int *street = new int[r], i;
		for (i = 0; i < r; i++) cin >> street[i];
		sort(street, street + r);
	
		int mid = street[r / 2], d = 0;
		for (i = 0; i < r; i++) d += abs(street[i] - mid);
		cout << d << endl;	
	}
}
