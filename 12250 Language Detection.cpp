#include <iostream>
using namespace std;
int main(){
	int cnt = 0;
	string s, str[] = {"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"}, 
		   lang[] = {"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};
	while(cin >> s && s != "#"){
		int isFind = 0;
		for (int i = 0; i < 6; i++)
			if (s == str[i]) {
				cout << "Case " << ++cnt << ": " << lang[i] << endl, isFind = 1;
				break;
			}

		if (!isFind) cout << "Case " << ++cnt << ": " << "UNKNOWN\n";
	}
}
