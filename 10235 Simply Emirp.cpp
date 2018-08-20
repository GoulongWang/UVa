#include <iostream>
#include <cmath>
using namespace std;
int prime(int N){
	for (int i = 2; i <= sqrt(N); i++) if (N % i == 0) return 0;
	return 1;
}

int main(){
	int n;
	while(cin >> n){
		int r = 0, temp = n;
		while(temp) r = r * 10 + temp % 10, temp /= 10;		
		if (!prime(n)) cout << n << " is not prime.\n";
		else if (prime(n) && prime(r) && n != r) cout << n << " is emirp.\n";
		else cout << n << " is prime.\n";
	}
}
