#include <iostream>
using namespace std;
int main(){
    int n, cnt, i, j, prime[32769];
    for(i = 0; i <= 32768; i++) prime[i] = 1;
    for(i = 2; i <= 32768; i++)
        if(prime[i]) for(j = i * i; j <= 32768; j += i) prime[j] = 0;
    
    while(cin >> n && n != 0){
        cnt = 0;
        for(i = 2; i <= n / 2; i++) if(prime[i] && prime[n - i]) cnt++;
        cout << cnt << endl; 
    }
}
