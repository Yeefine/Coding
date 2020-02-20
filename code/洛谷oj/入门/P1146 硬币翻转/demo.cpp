#include <bits/stdc++.h>
using namespace std;

int buf[101];

int main(){
	int n;
	cin >> n;
	cout << n << endl;
	for(int i = 1; i <= 100; i++)	buf[i] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i != j){
				buf[j] = 1 - buf[j];
			}
		}
		
		for(int j = 1; j <= n; j++){
			cout << buf[j];
		}
		cout << endl;
	}
	return 0;
}
