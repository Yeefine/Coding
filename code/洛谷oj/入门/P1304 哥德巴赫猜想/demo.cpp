#include <bits/stdc++.h>
using namespace std;

int prime[5001];
bool flag[5001];
int primeSize;

void init(){
	for(int i = 1; i <= 5000; i++)	flag[i] = false;
	primeSize = 0;
	for(int i = 2; i <= 5000; i++){
		if(flag[i] == true)	continue;
		prime[primeSize++] = i;
		for(int j = i*i; j <= 5000; j += i){
			flag[j] = true;
		}
	}
} 

bool isPrime(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0)	return false;
	}
	return true;
}

int main(){
	init();
	int n;
	scanf("%d", &n);
	for(int i = 4; i <= n; i += 2){
		for(int j = 0; j < primeSize; j++){
			int x = i - prime[j];
			if(isPrime(x)){
				printf("%d=%d+%d\n", i, prime[j], x);
				break;
			}
		}
	}
	return 0;
}
