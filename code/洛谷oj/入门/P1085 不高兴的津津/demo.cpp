#include <stdio.h>

int main(){
	int a, b, max_day, max = 0;
	for(int i = 1; i <= 7; i++){
		scanf("%d%d", &a, &b);
		if(a+b > max){
			max = a+b;
			max_day = i;
		}	
	}
	printf("%d\n", max_day);
	return 0;
} 
