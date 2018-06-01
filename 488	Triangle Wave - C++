#include<iostream>
using namespace std;
int main(){
	int n, height, freq;
	cin >> n;
	while(n--){
		cin >> height >> freq;
		for(int i = 1; i <= freq; i++){
			for(int j = 1; j <= height; j++){
				for(int z = 1; z <= j; z++) cout << j; cout << endl;
			}
			for(int j = height - 1; j >= 1; j--){
				for(int z = 1; z <= j; z++) cout << j; cout << endl;
			}
			if(!(n == 0 && i == freq)) cout << endl;
		}
	}
}
