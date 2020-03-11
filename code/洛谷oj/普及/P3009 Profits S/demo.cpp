#include <stdio.h>
#include <algorithm>
using namespace std;
int dp[100005];
int P[100005];
int main(){
	int n, maxn = 0x80000001;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &P[i]);
	}
	dp[1] = P[1];
	for(int i = 2; i <= n; i++){
		dp[i] = max(P[i], dp[i-1]+P[i]);
		maxn = max(maxn, dp[i]);
	}
	printf("%d\n", maxn);
	return 0;
}
