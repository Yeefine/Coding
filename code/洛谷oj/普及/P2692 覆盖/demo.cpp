#include <bits/stdc++.h>
using namespace std;

int X[5001] = {0};  //第一行 
int Y[5001] = {0};  //第一列 

int main(){
	int n, m, b, g, num_x = 0, num_y = 0;
	cin >> n >> m >> b >> g;
	while(b--){
		int x, y;
		cin >> x >> y;
		for(int i = x; i <= y; i++){
			if(Y[i] == 0){
				Y[i] = 1;
				num_x++;
			}
		}
	} 
	while(g--){
		int x, y;
		cin >> x >> y;
		for(int i = x; i <= y; i++){
			if(X[i] == 0){
				X[i] = 1;
				num_y++;
			}
		}
	} 
	int cnt = num_x * m + num_y * n - num_x * num_y;
	cout << cnt << endl;
	return 0;
}
