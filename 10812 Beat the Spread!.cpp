#include <iostream>
using namespace std;
int main(){
	int t, s, d;
	cin >> t;
	while(t--){
		cin >> s >> d;
		s < d || (s - d) % 2? cout << "impossible\n": cout << (s + d) / 2 << " " << (s - d) / 2 << endl;
	}
}
