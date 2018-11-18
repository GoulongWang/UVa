#include <iostream>
using namespace std;
int main() {
    int n, p, cases = 0;
    while(cin >> n >> p && n) {
    	string result, ignore, name;
    	float min = 1000000, price;
    	int max = 0;
    	getchar();
    	while(n--) cin.ignore(80, '\n');
        
        while(p--) {
            getline(cin, name);
        	cin >> price >> n;
            if(n > max || (n == max && price < min))
            	max = n, min = price, result = name;
            getchar();
            while(n--) cin.ignore(80, '\n');
        }
        
        if(cases) cout << endl;
        cout << "RFP #" << ++cases << endl << result << endl;
    }
}

/*
1. cin.ignore(80, '\n') 代表忽略輸入直到遇到換行字元，且最多忽略 80 個字元
2. getline(cin, name) 讀取一整行 ( 不包括換行字元 )，並存入 name
*/
