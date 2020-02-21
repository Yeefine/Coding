#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[100001];

int main(){
	ll n, t = 0;
	scanf("%lld", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &a[i]);
	}
	a[0] = 0;
	a[n+1] = 0;
	sort(a, a+n+2);
	for(int i = 2; i <= n+1; i++){
		if(a[i] != a[i-1]){
			t = t + (a[i] - a[i-1]) * 6 + 6;
		}else	t += 1;
	}
	t = t + a[n+1] * 4;
	printf("%lld\n", t);
	return 0;
} 
