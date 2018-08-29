#include <iostream>
using namespace std;
int main(){
	int t, cnt = 0;
	cin >> t;
	while(t--){
		int high = 0, low = 0, wall, h, pre;
		cin >> wall >> pre, wall--;
		while(wall--) {
			cin >> h;
			if (h > pre) high++;
			else if (h < pre) low++;
			pre = h;
		}
		cout << "Case " << ++cnt << ": " << high << " " << low << endl;
	}
}
