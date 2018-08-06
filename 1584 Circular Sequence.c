#include<stdio.h>
#include<string.h>

int isSmaller(int index, int AnsIndex, char* str){
	for (int i = 0, N = strlen(str); i < N; i++){
		if (str[(index + i) % N] < str[(AnsIndex + i) % N]) return 1;
		else if(str[(index + i) % N] > str[(AnsIndex + i) % N]) return 0;
	}
	return 0;
}

int main(){
	unsigned T;
	scanf("%u", &T);
	while(T--){
		char s[105];
		scanf("%s", s);
		int ans = 0, n = strlen(s);

		for (int i = 1; i < n; i++) if (isSmaller(i, ans, s)) ans = i;
		for (int i = 0; i < n; i++) printf("%c", s[(ans + i) % n]); puts("");
	}

	return 0;
}

/*
1. ans 是最小字典序的起始位置，例如 : ans = 0 代表從第 0 個位置開始表示

2. 因為 ans 是從第 0 個位置開始表示，所以 i 從第一個位置開始和 ans 比較大小

3. 在比較字典序的時候，如果 str[(index + i) % N] 比較小，
   就代表由 index 位置開始的字典序比由 AnsIndex 位置開始的字典序還要小；
   如果 str[(index + i) % N] 比較大，就代表由 index 位置開始的字典序比由 AnsIndex 位置開始的字典序還要大；
   然後從迴圈結束之後，都沒有執行到 return 的話，就代表兩個字典序是相同的。

4. 比較字典序的迴圈裡面，不能寫成下面的樣子
   if (str[(index + i) % N] < str[(AnsIndex + i) % N]) return 1;
   else return 0;
   這樣會把等於的情況一起包含進去。
   
   例如 : 
   index : AAAC(小)
   AnsIndex : AAAT(大)

   在比較第 0 個字元的時候就直接回傳 0 了，但是其實 index 比 AnsIndex 小，應該要回傳 1
*/
