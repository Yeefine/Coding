#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, n;
	int a[11][21], b[11][21];
	scanf("%d%d", &k, &n);
	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
			b[i][a[i][j]] = j;
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			int cnt = 0;
			for(int m = 1; m <= k; m++){
				if(b[m][i] > b[m][j])	cnt++;
			}
			
			if(cnt == k){
				ans++;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
} 
