#include <bits/stdc++.h>
using namespace std;

int main(){
	int k;
	scanf("%d", &k);
	int ans = 0, c = 1;
	while(k-c > 0){
		k -= c;
		ans += c*c;
		c++;
	}
	if(k <= c)	ans += k*c;
	printf("%d\n", ans);
	return 0;
}
