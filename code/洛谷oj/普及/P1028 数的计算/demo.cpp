#include <stdio.h>
int F[1005] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i/2; j++){
			F[i] += F[j];
		}
		F[i]++;
	}
	printf("%d\n", F[n]); 
	return 0;
}


