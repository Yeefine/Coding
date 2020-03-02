#include<stdio.h>

int main(){
	int n, tmp, num_0 = 0, num_5 = 0;
	scanf("%d", &n); 
	while(n--){
		scanf("%d", &tmp);
		if(tmp == 5)	num_5++;
		else num_0++;
	}
	if(num_5 >= 9){
		tmp = num_5 - num_5 % 9;
		for(int i = 0; i < tmp; i++){
			printf("5");
		}
		for(int i = 0; i < num_0; i++){
			printf("0");
		}
		printf("\n");
	}else printf("-1\n");
	return 0;
} 
