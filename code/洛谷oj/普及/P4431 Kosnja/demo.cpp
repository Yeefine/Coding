#include <bits/stdc++.h>
using namespace std;

int main(){
	int k;
	scanf("%d", &k);
	int n, m;
	while(k--){
		scanf("%d%d", &n, &m);
		n = min(n, m);
		int ans = (n-1) * 2;
		printf("%d\n", ans);
	}
	return 0;
}
