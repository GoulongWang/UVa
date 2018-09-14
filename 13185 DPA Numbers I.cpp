#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int sum = 0, n;
		cin >> n;
		for (int i = 1; i <= n / 2; i++) if (!(n % i)) sum += i;
		if (sum < n) cout << "deficient\n";
		else if (sum == n) cout << "perfect\n";
		else cout << "abundant\n";
	}
}
