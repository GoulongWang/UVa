#include <iostream>
using namespace std;
int main(){
	unsigned T, a, b, cnt = 0;
	cin >> T;
	while(T--){
		unsigned sum = 0;
		cin >> a >> b;
		for (int i = a; i <= b; i++) if(i % 2) sum += i;
		cout << "Case " << ++cnt << ": " << sum << endl;
	}
}
