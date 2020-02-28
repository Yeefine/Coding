#include <bits/stdc++.h>
using namespace std;

int prime[20000];
bool flag[20000];
int primeSize;

void init(){
	for(int i = 0; i < 20000; i++)	flag[i] = false;
	primeSize = 0;
	for(int i = 2; i < 20000; i++){
		if(flag[i] == true)	continue;
		flag[i] = true;
		prime[primeSize++] = i;
		for(int j = i*i; j < 20000; j+=i){
			flag[j] = true;
		}
	}
}

bool judge(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0)	return false;
	}
	return true;
}

int main(){
	init();
	int n, a, b, k = 0;
	scanf("%d", &n);
	for(int i = 0; i < primeSize; i++){
		a = prime[i];
		for(int j = 0; j < primeSize; j++){
			b = prime[j];
			if( n > a+b && judge(n-a-b) == true){
				k = 1;
				break;
			}
			continue;
		}
		if(k == 1)	break;
		continue;
	}
	printf("%d %d %d", a, b, n-a-b);
	return 0;
}
