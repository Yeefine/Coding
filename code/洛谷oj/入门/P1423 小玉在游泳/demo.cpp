#include <stdio.h>
double n, sum = 0;
int times(double x, int t){
	sum += x; 
	if(sum >= n)	return t;
	return times(x * 0.98, t+1);
}

int main(){
	scanf("%lf", &n);
	printf("%d\n", times(2, 1));
	return 0;	
} 
