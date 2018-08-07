#include<iostream>
using namespace std;
int main(){
	unsigned T;
	cin >> T;
	while(T--){
		unsigned N, freq[10] = {0}, i;
		cin >> N;
		for (i = N; i > 0; i--) {
			int temp = i;
			while(temp) freq[temp % 10]++, temp /= 10;
		}
		for (i = 0; i < 9; i++) cout << freq[i] << " ";
		cout << freq[9] << endl;
	}
}
