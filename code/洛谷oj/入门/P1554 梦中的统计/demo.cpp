#include <bits/stdc++.h>
using namespace std;

int cnt[10];

int main(){
	int m, n, tmp, x;
	scanf("%d%d", &m, &n);
	for(int i = 0; i < 10; i++){
		cnt[i] = 0;
	}
	for(int i = m; i <= n; i++) {
		x = i;
		while(x != 0){
			tmp = x % 10;
			cnt[tmp]++;
			x /= 10;
		}
	}
	for(int i = 0; i < 10; i++){
		if(i != 0)	printf(" ");
		printf("%d", cnt[i]);
	}
	return 0;
}
