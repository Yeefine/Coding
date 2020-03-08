#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define T 1005
#define M 105

int f[T][M]; 
int time[M], value[M];

int main(){
	int t, m;
	cin >> t >> m;
	for(int i = 1; i <= m; i++){
		cin >> time[i] >> value[i];
	}
	for(int i = 0; i <= m; i++)	f[0][i] = 0;
	
	for(int i = 1; i <= t; i++){
		for(int j = 0; j <= m; j++){
			if(i >= time[j]){
				f[i][j] = max(f[i][j-1], f[i - time[j]][j-1] + value[j]);
			}else{
				f[i][j] = f[i][j-1];
			} 
			
		}
	}
	cout << f[t][m] << endl;
	return 0;
}
