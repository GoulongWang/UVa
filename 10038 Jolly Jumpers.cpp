#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		int flag = 1, prev, nums[3010], jolly[3010] = {0};
		for (int i = 1; i <= n; i++) cin >> nums[i];
		for (int i = 1; i < n; i++){
			int D = abs(nums[i] - nums[i + 1]);
			if (D > n - 1 || D == 0 || jolly[D]) {
				cout << "Not jolly\n", flag = 0;
				break;	
			}
			jolly[D] = 1;
		}
		if(flag) cout << "Jolly\n";
	}
	return 0;
}
