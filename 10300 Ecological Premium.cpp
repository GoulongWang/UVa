#include<iostream>
using namespace std;
int main(){
	int n;
	for (cin >> n; n; n--){
		long sum = 0, f, a, num, l;
		cin >> f;
		while(f--) cin >> a >> num >> l, sum += a * l;
		cout << sum << endl;
	}
}
