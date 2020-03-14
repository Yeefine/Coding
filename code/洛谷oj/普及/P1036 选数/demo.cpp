#include<stdio.h>
#include<math.h>
using namespace std;
int n, k, cnt;
int a[25];
bool isPrime(long long x){
	for(long long i = 2; i <= sqrt(x); i++){
		if(x % i == 0)	return false;
	}
	return true;
}

void dfs(int m, long long sum, int start){
	if(m == k){
		if(isPrime(sum)){
			cnt++;
			return;
		}
	}
	for(int i = start; i < n; i++){
		dfs(m+1, sum+a[i], i+1);
	}
	return;
} 

int main(){
	cnt = 0;
	long long sum;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	dfs(0, 0, 0);
	printf("%d", cnt);
	return 0;
}
