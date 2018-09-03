#include <iostream>
using namespace std;
int main(){
	int t;
	cout << "Lumberjacks:\n";
	cin >> t;
	while(t--){
		int ordered = 1, num[10];
		for (int i = 0; i < 10; i++) cin >> num[i];
		for (int i = 2; i < 10; i++)
			if (num[i] > num[i - 1] ^ num[i - 1] > num[i - 2]){
				ordered = 0;
				break;
			}

		cout << (ordered? "Ordered\n": "Unordered\n");
	}
}
