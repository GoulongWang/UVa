#include <iostream>
using namespace std;
int Reverse(unsigned n){
    unsigned rev = 0;
    while(n) rev = rev * 10 + n % 10, n /= 10;
    return rev;
}

int main(){
    int N;
    for(cin >> N; N; N--){
        unsigned P, cnt = 0;
        cin >> P;
        do P += Reverse(P), cnt++; while(P != Reverse(P));
        cout << cnt << " " << P << endl;
    }
}
