#include <stdio.h>

int main(){
	int n;
	int min = 0x7fffffff;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		if(x < min)	min = x;
	}
	printf("%d\n", min);
	return 0;
}
