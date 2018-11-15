#include <stdio.h>
int Reverse(unsigned n){
    unsigned rev = 0;
    while(n) rev = rev * 10 + n % 10, n /= 10;
    return rev;
}

int main(){
    int N;
    for(scanf("%d", &N); N; N--){
        unsigned P, cnt = 0;
        scanf("%u", &P);
        do P += Reverse(P), cnt++; while(P != Reverse(P));
        printf("%u %u\n", cnt, P);
    }
}
