#include <stdio.h>
int a, b, c, d;
int GCD(int a, int b){
	if(b == 0)	return a;
	else	return GCD(b, a % b);
}
int main(){
	int tmp;
	scanf("%d/%d", &a, &b);
	scanf("%d/%d", &c, &d);
	a *= c;
	b *= d;
	tmp = GCD(a, b);
	a /= tmp;
	b /= tmp;
	printf("%d %d\n", b, a);
	return 0;
}
