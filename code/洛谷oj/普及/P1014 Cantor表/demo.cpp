#include <stdio.h>

int main(){
	int n, a, b, tmp;
	scanf("%d", &n);
	int x;
	for(x = 1; x*(x+1)/2 < n; x++)	tmp = n - x*(x+1)/2;
	if(x % 2 == 0){
		a = 1 + tmp - 1;
		b = x - tmp + 1;
		
	}else{
		a = x - tmp + 1;
		b = 1 + tmp -1;
	}
	printf("%d/%d\n", a, b);
	return 0;
}
