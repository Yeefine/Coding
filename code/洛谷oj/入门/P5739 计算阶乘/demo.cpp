#include <bits/stdc++.h>
using namespace std;

long long  F(int n){
	if(n == 1)	return 1;
	else	return n*F(n-1);
} 

int main(){
	int n;
	scanf("%d", &n);
	printf("%lld\n", F(n));
	return 0;
}
