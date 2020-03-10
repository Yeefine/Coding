#include <stdio.h>
long long n, p, k, a, b;

int main(){
	scanf("%lld%lld%lld", &n, &p, &k);
	a = p * k % n;
	printf("%lld\n", a);
	return 0;
}
