#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	unsigned t, temp, cnt = 0, n[3];
	cin >> t;
	while(t--){
		cin >> n[0] >> n[1] >> n[2];
		sort(n, n + 3);
		cout << "Case " << ++cnt << ": " << n[1] << endl;
	}
}
