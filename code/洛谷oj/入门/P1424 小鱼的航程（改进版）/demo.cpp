#include <stdio.h>
int main(){
	int x, n, cnt=0;
	scanf("%d%d", &x, &n);
	while(n--){
		if(x != 6 && x != 7){
			x++;
			cnt+=250;
		}else if(x+1 > 7){
			x = 1;
		}else	x++;
	}
	printf("%d\n", cnt);
} 
