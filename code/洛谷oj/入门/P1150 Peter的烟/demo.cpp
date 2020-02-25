#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, cnt = 0, ans = 0;
	scanf("%d%d", &n, &k);
	while(n > 0){
		ans += n;
		cnt += n;
		n = cnt / k;
		cnt = cnt % k; 
	}
	printf("%d\n", ans);
	return 0;
}
