#include <iostream>
using namespace std;
int main() {
    int t;
    while (cin >> t && t){
        int up = 1, n = 2, w = 3;
        while(t--){
            int tmp = up;
            char str[6];
            cin >> str;
            
            if (str[0] == 'n') up = 7 - n, n = tmp;
            else if(str[0] == 's') up = n, n = 7 - tmp;
            else if(str[0] == 'e') up = w, w = 7 - tmp;
            else if(str[0] == 'w') up = 7 - w, w = tmp;
        }
        cout << up << endl;
    }
}
