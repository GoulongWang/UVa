#include <iostream>
using namespace std;
int happyNum(int N){
	int sum = 0;
	while(N) sum += (N % 10) * (N % 10), N /= 10;
	return sum < 10? sum == 1 || sum == 7? 1: 0: happyNum(sum);
}

int main(){
	int t, n;
	cin >> t;
	for (int i = 1; i <= t; i++){
		cin >> n;
		printf("Case #%d: %d is ", i, n);
		cout << (happyNum(n)? "a Happy number.\n": "an Unhappy number.\n");
	}
}
