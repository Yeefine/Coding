#include <stdio.h>
int min(int a, int b){
	return a < b ? a : b; 
}
 
int main(){
	int cost, save = 0, now = 0, k = 13;
	for(int i = 1; i <= 12; i++){
		now += 300;
		scanf("%d", &cost);
		if(now < cost){
			k = min(k, i);
		}	
		save += (now - cost) / 100 * 100;
		now = (now - cost) % 100;
	}
	if(k != 13)	printf("-%d\n", k);
	else	printf("%d\n", save * 120 / 100 + now);	
	return 0;
} 
