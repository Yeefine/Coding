#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int m = 0, ans = 0;
	for(int i = 0; i < n; i++){
		int a, b;
		scanf("%d%d", &a, &b); 
		int now = m + a + b - 8;
		m = now;
		ans += now;
	}
	printf("%d\n", ans);
	return 0;
}
