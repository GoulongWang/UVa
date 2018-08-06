#include<iostream>
#include<cstring>
using namespace std;
int isSmaller(int index, int AnsIndex, char* str){
	for (int i = 0, N = strlen(str); i < N; i++){
		if (str[(index + i) % N] < str[(AnsIndex + i) % N]) return 1;
		else if(str[(index + i) % N] > str[(AnsIndex + i) % N]) return 0;
	}
	return 0;
}

int main(){
	unsigned T;
	cin >> T;
	while(T--){
		char s[105];
		cin >> s;
		int ans = 0, n = strlen(s);

		for (int i = 1; i < n; i++) if (isSmaller(i, ans, s)) ans = i;
		for (int i = 0; i < n; i++) cout << s[(ans + i) % n]; cout << endl;
	}
}
