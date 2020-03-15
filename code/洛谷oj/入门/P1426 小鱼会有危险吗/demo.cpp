#include <stdio.h>

int main(){
	double s, x, start, end, tmp = 7 / 0.98, now = 0;
	scanf("%lf%lf", &s, &x);
	start = s - x;
	end = s + x;
	while(now < end){
		if(now >= start){
			if(now + tmp*0.98 > end){
				printf("n\n");
			}else	printf("y\n");
			break;
		}
		tmp *= 0.98;
		now += tmp;
	}
	return 0;
} 
