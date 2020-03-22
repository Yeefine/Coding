#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int Z[10][10];
int S[10][10];

int main(){
	int n, cnt = 1;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(cnt < 10)	cout << 0 << cnt;
			else	cout << cnt;
			cnt++;
		}
		cout << endl;
	}
	cout << endl;
	cnt = 1;
	for(int j = 1; j <= n; j++){
		int tmp = 2*n-2*j;
		while(tmp--)	cout << " ";
		tmp = j;
		while(tmp--){
			if(cnt < 10)	cout << 0 << cnt;
			else	cout << cnt;
			cnt++;
		} 
		cout << endl;
	}
	return 0;
}
