#include<iostream>
using namespace std;
unsigned num[10001] = {0};
int main() {
	int cnt = -1, input, i;
	while(cin >> input) {
		for(i = cnt; i >= 0; i--)
			if(num[i] > input) num[i + 1] = num[i];
			else break;
		num[i + 1] = input, cnt++;
		cout << (cnt & 1? (num[cnt/2] + num[cnt/2 + 1]) / 2: num[cnt/2]) << endl;
	}
}
