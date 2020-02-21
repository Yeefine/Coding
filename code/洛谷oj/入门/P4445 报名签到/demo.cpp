#include <stdio.h>

int a[100001];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	int ans = 0;
	for(int i = 1; i < n; i++){
		if(a[i] > a[i+1])	ans += a[i];
		else	ans += a[i+1];
	} 
	printf("%d\n", ans);
	return 0;
}
