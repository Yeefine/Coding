#include <bits/stdc++.h>
using namespace std;

int n, k, cnt;
long long sum(int n){
	return (1+n)*n/2;
}

long long sum_k(int n){
	long long ans = 0;
	cnt = 0;
	for(int i = k; i <= n; i+=k){
		ans += i;
		cnt++;
	}
	return ans;
}

int main(){
	double a, b;
	scanf("%d%d", &n, &k);
	a = (double)(sum(n) - sum_k(n))/(n - cnt);
	b = (double)sum_k(n)/cnt;
	printf("%.1lf %.1lf\n", b, a);
	return 0;
}
