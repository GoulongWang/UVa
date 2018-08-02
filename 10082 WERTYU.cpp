#include<iostream>
using namespace std;
int main(){
	char c, keyboard[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	while(cin.get(c)){
		int i;
		for (i = 1; c != keyboard[i]; i++);
		cout << ((c != ' ' && c != '\n')? keyboard[i - 1]: c);
	}
}
