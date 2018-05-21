#include <stdio.h>
int main() {
    char input[100];
    int cnt = 0;
    while(fgets(input, 100, stdin) != NULL){
        for(int i = 0; i < strlen(input); i++){
            if(input[i] == '\"'){
                if(++cnt % 2 == 1) printf("``");
                else printf("''");
            }else printf("%c", input[i]);   
        }
    }
    return 0;
}
