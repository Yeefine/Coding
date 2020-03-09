#include <stdio.h>
#include <iostream>
using namespace std;
int w[30], v[30];
long long dp[30005];

int main(){
	int n, m, a, b;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= m; i++){
		scanf("%d%d", &a, &b);
		w[i] = a;
		v[i] = a*b;
	}
	for(int i = 1; i <= m; i++){
		for(int j = n; j >= w[i]; j--){
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}
	printf("%lld\n", dp[n]);
	return 0;
}
