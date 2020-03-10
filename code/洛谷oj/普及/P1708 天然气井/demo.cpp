#include <stdio.h>
#include <math.h>
int main(){
	int n, a, b;
	long long cnt1 = 0, cnt2 = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d%d", &a, &b);
		cnt1 += a;
		cnt2 += b; 
	}	
	for(int i = 1; i <= n; i++){
		scanf("%d%d", &a, &b);
		cnt1 -= a;
		cnt2 -= b; 
	}
	printf("%lld\n", abs(cnt1)+abs(cnt2));
	return 0;
}
