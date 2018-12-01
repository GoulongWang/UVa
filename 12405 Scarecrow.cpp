#include <iostream>
using namespace std;
int main(){
	int t, cnt = 0;
	for (cin >> t; t; t--){
		int cnt2 = 0, n;
		string field;
		cin >> n >> field;
		for (int i = 0; i < n;) field[i] == '#'? i++: (i += 3, cnt2++);
		cout << "Case " << ++cnt << ": " << cnt2 << endl;
	}
}
