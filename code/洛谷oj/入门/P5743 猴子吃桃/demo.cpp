#include <stdio.h>

int main(){
	int n, ans = 1;
	scanf("%d", &n);
	n--; 
	while(n--){
		ans = (ans+1)*2;
	}
	printf("%d\n", ans);
	return 0;
} 
