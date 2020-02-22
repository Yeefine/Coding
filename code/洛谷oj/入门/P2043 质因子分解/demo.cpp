#include <bits/stdc++.h>
using namespace std;

bool mark[10101];
int prime[10101];
int primeSize;

void init(){
	for(int i = 0; i <= 10100; i++){
		mark[i] = false;
	}
	primeSize = 0;
	for(int i = 2; i <= 10100; i++){
		if(mark[i] == true)	continue;
		prime[primeSize++] = i;
		mark[i] = true;
		for(int j = i*i; j <= 10100; j += i){
			mark[j] = true;
		}
	}
}

int main(){
	init();
	int n, k;
	int cnt[10100];
	scanf("%d", &n);
	for(int i = 0; i < 10100; i++){
		cnt[i] = 0;
	}
	
	for(int i = 0; i < primeSize; i++){
		if(prime[i] > n){
			k = i;
			break;
		}	
		int p = prime[i];
		while(n / p > 0){
			cnt[i] += n / p;
			p = p * prime[i];
		}
	}
	for(int i = 0; i < k; i++){
		printf("%d %d\n", prime[i], cnt[i]);
	}
	return 0;
}
