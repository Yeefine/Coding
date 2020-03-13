#include <stdio.h>
long long num[105];

int main(){
	int size = 0;
	long long n;
	while(scanf("%lld", &n) != EOF && n != 0){
		num[size++] = n;
	}
	for(int i = size-1; i >= 0; i--){
		if(i != size - 1)	printf(" ");
		printf("%lld", num[i]);
	}
	return 0;
} 
