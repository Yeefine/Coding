#include <bits/stdc++.h>
using namespace std;

int main(){
	int A[101], B[101];
	int n, a, b, ans = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> A[i];
		B[i] = A[i];
	}
	
	for(int i = 1; i < n; i++){
		a = A[i];
		for(int j = i+1; j <= n; j++){
			b = A[j];
			for(int k = 1; k <= n; k++){
				if(B[k] == a+b){
					ans++;
					B[k] = 0;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
} 
