#include <iostream>
using namespace std;
int length(int);
int main(){
    int i, j, max = 0;
	while(cin >> i >> j){
	    cout << i << " " << j << " ";
	    if(i > j){
	        int temp = i;
	        i = j;
	        j =temp;
	    }
	    
		for (int a = i; a <= j; a++) if (length(a) >= max) max = length(a);
		cout << max << endl;
		max = 0;
	}
}

int length(int n){
    int length = 0;
    while(n > 1){
        length++;
        if(n % 2 == 1) n = 3 * n + 1;
        else n /= 2;
    }
    return length + 1;
}
