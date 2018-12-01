#include <iostream>
using namespace std;
int main(){
	int n;
	long long ans[81] = {0, 1, 2};
	for (int i = 3; i <= 80; ++i) ans[i] = ans[i - 1] + ans[i - 2];
	while(cin >> n && n) cout << ans[n] << endl;	
}
