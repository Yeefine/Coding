#include <stdio.h>
int num[10] = {0};
void init(){
	for(int i = 1; i <= 9; i++)	num[i] = 0;
}

void f(int x){
	int tmp = x; 
	while(tmp != 0){
		num[tmp % 10] = 1;
		tmp /= 10;
	}
}
int main(){
	int a, b, c, x, y, z, flag, flag1 = 0;
	scanf("%d%d%d", &a, &b, &c);
	for(int i = 123; i <= 345; i++){
		flag = 0;
		init();
		x = i;
		y = i * b / a;
		z = i * c / a;
		if(y > 999 || z > 999)	break;
		f(x);
		f(y);
		f(z);
		for(int i = 1; i <= 9; i++){
			if(num[i] == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			printf("%d %d %d\n", x, y, z);
			flag1 = 1;
		}
	}
	if(flag1 == 0)	puts("No!!!");
	return 0;
}
