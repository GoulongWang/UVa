#include <stdio.h>
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%s\n", (n - 1) % 3? "YES": "NO");
	}
	return 0;
}

/*
此題有點難，規律不好找
參考解法 :
http://justimchung.blogspot.com/2017/11/uva-13178-is-it-multiple-of-3.html
*/
