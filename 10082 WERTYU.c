#include<stdio.h>
#include<string.h>
int main(){
	char c, keyboard[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	while((c = getchar()) != EOF){
		int i;
		for (i = 1; c != keyboard[i]; i++);
		putchar((c != ' ' && c != '\n')? keyboard[i - 1]: c);
	}
	return 0;
}

/*
1. 迴圈從 i = 1 開始找，因為 "`" 不會出現在 Input 中
2. 循序搜尋時，當 c 不等於目前的 keyboard[i] 的時後，
   就繼續往下一個 index 尋找，直到 c == keyboard[i]，迴圈才會停止
3. 若找不到輸入的字元，這就代表可能是空白字元或是換行，所以就直接輸出
*/
