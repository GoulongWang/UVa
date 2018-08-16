#include<iostream>
using namespace std;
int main(){
	long long a, b;
	while(cin >> a >> b)  printf("%lld\n", b > a? b - a: a - b);
}
