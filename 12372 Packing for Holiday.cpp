#include <iostream>
using namespace std;
int main(){
	int t, l, w, h, cnt = 0;
	cin >> t;
	while(t--){
		cin >> l >> w >> h;
		cout << "Case " << ++cnt << ": " << (l > 20 || w > 20 || h > 20? "bad\n": "good\n");
	}
}
