#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, n = 1;
	scanf("%d", &k);
	double sum = 0;
	do{
		sum += (1.0 / n);
		n++;
	}while(sum <= k);
	printf("%d\n", n-1);	
	return 0;
} 
