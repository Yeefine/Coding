#include<bits/stdc++.h>
using namespace std;
#define M 2005
#define N 2005
int buf[M][N];
int dp[N][M];  //第i阶段第j组的最少天数 

int main(){
	int m, n, ans = 0x7fffffff;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= m; i++){
		for(int j  = 1; j <= n; j++){
			scanf("%d", &buf[i][j]);
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			dp[i][j] = min(dp[i-1][j], j==1 ? dp[i-1][m] : dp[i-1][j-1]) + buf[j][i];	
		}
	}
	for(int i = 1; i <= m; i++){
		ans = min(ans, dp[n][i]);
	}
	printf("%d\n", ans);
} 
