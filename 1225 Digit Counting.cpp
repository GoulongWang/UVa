#include<iostream>
using namespace std;
void count(unsigned n, unsigned* FREQ){
	while(n) FREQ[n % 10]++, n /= 10;
}

int main(){
	unsigned T;
	cin >> T;
	while(T--){
		unsigned N, freq[10] = {0}, i;
		cin >> N;
		for (i = N; i > 0; i--) count(i, freq);
		for (i = 0; i < 9; i++) cout << freq[i] << " "; cout << freq[9] << endl;
	}
}
