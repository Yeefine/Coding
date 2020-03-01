#include <stdio.h>

int main(){
	int n, m, ans = 1, k = 0;
	scanf("%d%d", &n, &m);
	while(n--){
		int a;
		scanf("%d", &a);
		if(k+a <= m)	k += a;
		else{
			ans++;
			k = a;
		}
	}
	printf("%d\n", ans);
	return 0; 
} 
