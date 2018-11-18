#include <string.h>
#include <stdio.h>
int main() {
    int n, p, cases = 0;
    while(scanf("%d%d", &n, &p) && n) {
    	char result[100], ignore[100], name[100];
    	float min = 1000000, price;
    	int max = 0;
    	getchar();
    	while(n--) fgets(ignore, sizeof(ignore), stdin);
        
        while(p--) {
        	fgets(name, sizeof(name), stdin);
        	scanf("%f%d", &price, &n);
            if(n > max || (n == max && price < min))
            	max = n, min = price, strcpy(result, name);
            getchar();
            while(n--) fgets(ignore, sizeof(ignore), stdin);
        }
        
        if(cases) puts("");
        printf("RFP #%d\n%s", ++cases, result);
    }
}

/*
1. 用 getchar() 是因為數字後面會有一個 "換行字元"，要忽略它，
   要不然後面 while() 的 fgets() 會把數字後面的 "換行字元" 也一起讀進去，
   這樣迴圈會少一次
2. fgets() 會把整行字串包括 "換行字元" 讀進去，所以輸出資料時不用多打 \n
3. 兩筆資料中間會有一行空白，"最後一筆資料後面不能有空白"
   所以不能寫成 printf("RFP #%d\n%s\n", ++cases, result);
*/
