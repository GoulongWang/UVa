#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, num[50] = {0}, cnt = 0, tmp, i, j;
		cin >> n;
		for (i = 0; i < n; i++) cin >> num[i];
		for (i = 1; i < n; i++)
			for (j = 0; j < n - i; j++) 
			    if (num[j] > num[j + 1]) swap(num[j], num[j + 1]), cnt++;

		printf("Optimal train swapping takes %d swaps.\n", cnt);
	}
}
