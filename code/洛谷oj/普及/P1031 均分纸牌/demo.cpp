#include <stdio.h>
int A[105];

int main(){
	int n, sum, p, cnt = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &A[i]);
		sum += A[i];
	}
	p = sum / n;
	for(int i = 0; i < n; i++)	A[i] -= p;
	for(int i = 0; i < n-1; i++){
		if(A[i] == 0)	continue;
		A[i+1] += A[i];
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
