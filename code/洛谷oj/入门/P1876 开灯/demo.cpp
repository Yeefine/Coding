#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, k = 1;
	scanf("%lld", &n);
	while(k*k <= n){
		if(k != 1)	printf(" ");
		printf("%lld", k*k);
		k++; 
	}
	return 0;
}
