#include <stdio.h>

int main(){
	long long a, b, c;
	scanf("%lld%lld%lld", &a, &b, &c);
	if(a*a > b*c)	puts("Alice");
	else 	puts("Bob");
	return 0;
} 
