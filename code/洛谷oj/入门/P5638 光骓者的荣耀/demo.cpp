#include <bits/stdc++.h>
using namespace std;

long long a[1000001];

int main(){
	long long n, k, ans = 0, sum = 0, maxn = 0;
	scanf("%lld%lld", &n, &k);
	for(long i = 1; i < n; i++){
		scanf("%lld", &a[i]);
		ans += a[i];
		if(i <= k){
			sum += a[i];
		}else if(i > k){
			sum += a[i];
			sum -= a[i-k];
		}
		maxn = max(maxn, sum);
	}
	printf("%lld\n", ans - maxn);
	return 0;
} 
