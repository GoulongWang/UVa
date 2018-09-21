#include <iostream>
using namespace std;
int main(){
	int N, R;
	while(cin >> N >> R){
		int num, NUM[1002] = {0}, i = R;
		while(i--) cin >> num, NUM[num]++;
		if (N == R) cout << "*";
		else for (int i = 1; i <= N; i++) if (!NUM[i]) cout << i << " ";
		cout << endl;
	}
}
