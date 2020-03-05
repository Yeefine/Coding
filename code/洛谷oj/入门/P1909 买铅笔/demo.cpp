#include<stdio.h>
#include<math.h>
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int n, a ,b, num, ans = 0x7fffffff;
	scanf("%d", &n);
	for(int i = 0; i < 3; i++){
		scanf("%d%d", &a, &b);
		num = (ceil)(n * 1.0 / a);
		ans = min(ans, num*b);
	}
	printf("%d\n", ans);
	return 0;
}
