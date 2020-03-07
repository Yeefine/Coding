#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream> 
using namespace std;
#define N 101
int A[N], B[N], C[N];  //A[i]第i种物品的件数，B[i]第i种物品的价值，C[i]第i中物品每格可放的个数
int f[N];
string name[N];

int toUp(int a, int c){  //有a件物品，每格可放c件，向上取整 
	int k = c;
	while(true){
		if(k >= a)	return k / c;
		k += c;
	}
}

int main(){
	int m, n, cnt = 1;
	cin >> m >> n;
	for(int i = 1; i <= n; i++){
		int a, b, c, flag = 0;
		string s;
		cin >> a >> b >> c;
		cin >> s;
		for(int j = 1; j < i; j++){
			if(name[j] == s){
				flag = 1;
				A[j] += a;
				break;
			}
		}
		if(flag == 0){
			A[cnt] = a;
			B[cnt] = b;
			C[cnt] = c;
			name[cnt] = s;
			cnt++;
		}
	}
	cnt--; 
	for(int i = 1; i <= cnt; i++){
		for(int j = 21-m; j >=0; j--){
			for(int k = 0; k <= A[i]; k++){
				int w = toUp(k, C[i]);
				if(j < w)	break;
				f[j] = max(f[j], f[j-w] + k * B[i]);
			}
		}
	}
	cout << f[21-m] << endl;
	return 0;
}
