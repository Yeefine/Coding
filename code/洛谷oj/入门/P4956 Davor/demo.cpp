#include <stdio.h>

int main(){
	int x, k, n;
	scanf("%d", &n);
	for(k = 1;;k++){
		int tmp = n / 52 - 21 * k;
		if(tmp % 7 == 0){
			x = tmp / 7;
			if(x >= 1 && x <= 100){
				printf("%d\n%d\n", x, k);
				break;
			}
		}	
	}
	return 0;
}
