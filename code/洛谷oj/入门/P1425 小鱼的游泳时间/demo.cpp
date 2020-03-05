#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a , &b, &c, &d);
	int t = (c*60 + d) - (a*60 + b);
	int h = t / 60;
	int m = t % 60;
	printf("%d %d\n", h, m);
	return 0;
}
