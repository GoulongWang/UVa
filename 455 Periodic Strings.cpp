#include<iostream>
#include<cstring>
using namespace std;
int isPeriodic(unsigned I, char* str){
	for(int i = 1; i < strlen(str) / I; i++) 
		for (int j = I * i; j <= I - 1 + I * i; j++) if (str[j] != str[j % I]) return 0;
	return 1;
}

int main(){
	unsigned T, i;
	cin >> T;
	while(T--){
		char s[85];
		cin >> s;
		for (i = 1; i <= strlen(s); i++) if (!(strlen(s) % i) && isPeriodic(i, s)) break;
		printf("%u\n", i);
		if (T) puts("");			
	}
}
