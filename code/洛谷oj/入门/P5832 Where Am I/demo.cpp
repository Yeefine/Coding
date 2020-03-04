#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, max = 0;
	string str;
	cin >> n;
	cin >> str;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			int k = i, q = j, cnt = 0;
			if(i == 3 && j == 11){
				int x = 0;
			}
			while(str[k] == str[q] && q < n){
				cnt++;
				k++; 
				q++;
			}
			if(cnt > max)	max = cnt;
		}
	}
	cout << max+1 << endl;
	return 0;
}
