#include<iostream>
#include<cstring>
#include<cctype>
#include<iomanip>
using namespace std;
int main(){
	unsigned T;
	cin >> T;
	while(T--){
		double sum = 0, molar;
		char s[85];
		cin >> s;
		for (int i = 0, n; i < strlen(s); i++)
		  if(isalpha(s[i])){
    			n = 1;
    			if(s[i] == 'C') molar = 12.01;
    			else if(s[i] == 'H') molar = 1.008;
    			else if(s[i] == 'O') molar = 16;
    			else if(s[i] == 'N') molar = 14.01;

    			if(isdigit(s[i + 1])) n = isdigit(s[i + 2])? (s[i + 1] - '0') * 10 + s[i + 2] - '0': s[i + 1] - '0';
    			sum += molar * n;
		  }

		cout << fixed << setprecision(3) << sum << endl;
	}
}
