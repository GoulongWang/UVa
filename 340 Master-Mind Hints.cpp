#include<iostream>
using namespace std;
int main(){
	unsigned n, ans[1005], guess[1005], cnt;
	while(cin >> n && n){
		cout << "Game " << ++cnt << ":\n";
		for (int i = 0; i < n; i++) cin >> ans[i];	

		while(1){
			unsigned A = 0, B = 0, checkAns[1005] = {0}, checkGue[1005] = {0};
			for (int i = 0; i < n; i++) {
				cin >> guess[i];
				if (ans[i] == guess[i]) A++, checkAns[i] = 1, checkGue[i] = 1;	
			}

			if (!guess[0]) break;

			for (int i = 0; i < n; i++) {
				if (checkAns[i]) continue;
				for (int j = 0; j < n; j++){
					if (checkGue[j]) continue;
					if (i != j && ans[i] == guess[j] && !checkAns[i] && !checkGue[j])
						B++, checkAns[i] = 1, checkGue[j] = 1;	
				}
			}

			cout << "    (" << A << "," << B << ")\n";
		}
	}
}
