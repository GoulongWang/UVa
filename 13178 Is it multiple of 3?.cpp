#include <iostream>
using namespace std;
int main(){
	unsigned long long t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << ((n * (n + 1) / 2) % 3? "NO\n": "YES\n");
	}
}
