#include <stdio.h>
#define N 105
#define M 10005
int dp[N][M];
int w[N];

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++)	scanf("%d", &w[i]);
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <= m; j++){
			if(j > w[i])	dp[i][j] = dp[i-1][j] + dp[i-1][j-w[i]];
			else if(j == w[i])	dp[i][j] = dp[i-1][j] + 1;
			else	dp[i][j] = dp[i-1][j];
		}
	}
	printf("%d", dp[n][m]);
	return 0;
}
