#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	while(cin >> a >> b && a > -1) c = abs(a - b), cout << (c < 50? c: 100 - c) << endl;
}
