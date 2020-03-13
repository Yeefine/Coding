#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n, maxn = 0, cnt = 1;
	long long a, b;
	scanf("%d", &n);
	scanf("%lld", &a);
	n--;
	while(n--){
		scanf("%lld", &b);
		if(b > a){
			cnt++;
			maxn = max(maxn, cnt);
		}else	cnt = 1;
		a = b;
	}
	printf("%d", maxn);
	return 0;
} 
