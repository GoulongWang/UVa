#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int e, f, c;
		cin >> e >> f >> c;
		int cnt = 0, empty = e + f;
		while(empty / c) cnt += empty / c, empty = empty / c + empty % c;
		cout << cnt << endl;
	}
}
