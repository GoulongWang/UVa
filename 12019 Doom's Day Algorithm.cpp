#include <iostream>
using namespace std;
int main(){
	string day[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int t, m, d, total[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
	cin >> t;
	while(t--) cin >> m >> d, cout << day[(total[m - 1] + d + 4) % 7] << endl;
}
