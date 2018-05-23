#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string input;
    int cnt = 0;
    while(getline(cin, input)){
        for(int i = 0; i < input.size(); i++){
            if(input[i] == '\"'){
                if(++cnt % 2 == 1) cout << "``";
                else cout << "''";
            }else cout << input[i];
        }
        cout << endl;
    }
}
