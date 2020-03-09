#include <stdio.h>

int main(){
	int n;
	long long m; 
	scanf("%d", &n);
	while(n--){
		scanf("%lld", &m);
		if(m % 2 == 0)	puts("pb wins");
		else	puts("zs wins");
	}
	return 0;
} 
