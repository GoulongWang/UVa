#include <iostream>
using namespace std;
int main(){
	int t, cnt = 0;
	cin >> t;
	while(t--){
		int n, age[9] = {0};
		cin >> n;
		for (int i = 0; i < n; i++) cin >> age[i];
		cout << "Case " << ++cnt << ": " << age[n / 2] << endl;
	}
}
