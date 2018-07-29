#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int N, cnt = 0;
	while(cin >> N, N > 0) printf("Case %d: %d\n", ++cnt, (int)ceil(log2(N))); // 取上界(天花板值)
}
