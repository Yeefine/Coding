#include <bits/stdc++.h>
using namespace std;

int main(){
	long n, sum1 = 0, sum2 = 0;
	scanf("%ld", &n);
	for(long i = 0; i < n ; i++){
		long a;
		scanf("%ld", &a);
		sum1 += a;
	}
	for(long i = 0; i < n ; i++){
		long b;
		scanf("%ld", &b);
		sum2 += b;
	}
	
	double ans = (double)(sum1 * 3 - sum2 * 2) / (sum1 - sum2);
	printf("%.6lf\n", ans);
	return 0;
}

