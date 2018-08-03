#include<iostream>
#include<cstring>
using namespace std;
unsigned Generator[100001];
int main(){
	unsigned T, n;
	memset(Generator, 0, sizeof(Generator));
	
	for (int i = 1; i < 100001; i++){
		int N = i, sum = i;
		while(N) sum += N % 10, N /= 10;
		if (Generator[sum] == 0) Generator[sum] = i;
	}

	cin >> T;
	while(T--) cin >> n, cout << Generator[n] << endl;
}
