#include<stdio.h>
long long cnt;
void dfs(long long n, int k){
	int x = (n+k) % 2;
	if((x != 0) || n <= k){
		cnt++;
	}else{
		int y = (n+k) / 2;
		dfs(y, k);
		dfs(y-k, k);
	}
} 

int main(){
	long long n, k;
	scanf("%lld%lld", &n, &k);
	cnt = 0;
	dfs(n, k);
	printf("%lld\n", cnt);
	return 0;
}
