#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){
	ll S, I, n, R =0;
	scanf("%lld%lld%lld", &S, &I, &n);
	double b, y;
	scanf("%lf%lf", &b, &y);
	for(int i = 1; i <= n; i++){ 
		ll tmp1, tmp2;
		tmp1 = ceil(b * S * I);
		tmp2 = ceil(y * I);
		R += tmp2;
		if(tmp1 > S)	tmp1 = S;
		else	tmp1 = ceil(b * S * I);
		I = I - tmp2 + tmp1;
		S -= tmp1;
	}
	printf("%lld %lld %lld\n", S, I, R);
	return 0;
}
