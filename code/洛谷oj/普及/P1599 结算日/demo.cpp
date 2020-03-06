#include <stdio.h>

int main(){
	int n, x, sum = 0, flag = 0, ans;
	scanf("%d", &n);
	ans = n;
	for(int i = 1; i <= n; i++){
		scanf("%d", &x);
		sum += x;
		if(sum >= 0 && flag != 0){
			ans += (i - flag)*2;
			flag = 0;
		}else if(sum < 0 && flag == 0){
			flag = i;
		}
	}
	printf("%d\n", ans);
	return 0;
}
