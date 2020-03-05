#include <stdio.h>
#include <algorithm>
using namespace std;
long long H[10005];

int main(){
	int n, ans = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)	scanf("%d", &H[i]);
	for(int i = 0; i < n; i++){
		int p, q, k, cnt = 0;
		p = i, q = i;
		while(H[p-1] <= H[p] && p > 0)	p--;
		while(H[q+1] <= H[q] && q < n-1)	q++;
		ans = max(ans, q-p+1);
	}
	printf("%d\n", ans);
	return 0;
} 
