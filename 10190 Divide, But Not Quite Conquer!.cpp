#include <iostream>
using namespace std;
int main(){
	long n, m;
	while(cin >> n >> m){
		int k = 0, num[100] = {0};
		while(n > 1 && m > 1 && n % m == 0) num[++k] = n, n /= m;

		if(n == 1 && k != 0){
			for (int i = 1; i <= k; i++) cout << num[i] << " ";
			cout << "1\n";
		} else cout << "Boring!\n";
	}
}
