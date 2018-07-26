#include<iostream>
using namespace std;
int main(){
	long long n;
	while(cin >> n){
		unsigned long long total = (n + 1) * (n + 1) / 4;
		cout << 6 * total - 9 << endl;
	}
}

/*
((n + 1) / 2) * ((n + 1) / 2) = (n + 1) * (n + 1) / 4
*/
