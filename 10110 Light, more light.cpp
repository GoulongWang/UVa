#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long n, root;
	while(cin >> n && n && (root = sqrt(n)))
    root * root == n? cout << "yes\n": cout << "no\n";
}
