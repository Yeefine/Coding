#include<stdio.h>
int main(){
	int n, a, flag = 0;
	scanf("%d", &n);
	for(int i = n; i >= 0; i--){
		scanf("%d", &a);
		if(a == 0)	continue;
		flag++;
		if(flag == 1){
			if(i != 0){
				if(a == 1)	printf("");
				else if(a == -1)	printf("-");
				else	printf("%d", a);
			}else	printf("%d", a);
		}else{
			if(i != 0){
				if(a == 1)	printf("+");
				else if(a == -1)	printf("-");
				else if(a > 0)	printf("+%d", a);
				else if(a < 0)	printf("%d", a);
			}else{
				if(a > 0)	printf("+");
				printf("%d", a);
			}
			
		}
		if(i != 0 && i != 1)	printf("x^%d", i);
		else if(i == 1)	printf("x");
	}
	if(flag == 0)	printf("0\n");
	return 0;
}
