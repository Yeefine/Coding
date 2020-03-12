#include <stdio.h>
int num[10] = {0};

int main(){
	int n, x, k ,tmp;
	scanf("%d%d", &n, &x);
	for(int i = 1; i <= n; i++){
		k = i;
		while(k != 0){
			num[k%10]++;
			k /= 10;
		}
	}
	printf("%d\n", num[x]);
	return 0;
}
