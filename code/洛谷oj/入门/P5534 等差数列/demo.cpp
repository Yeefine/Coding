#include <bits/stdc++.h>
using namespace std;

int main(){
	int a1, a2, n, d;
	scanf("%d%d%d", &a1, &a2, &n);
	d = a2 - a1;
	long long an = a1 + (n-1)*d;
	long long ans = (a1 + an) * n / 2;
	printf("%lld\n", ans);
	return 0;
}
