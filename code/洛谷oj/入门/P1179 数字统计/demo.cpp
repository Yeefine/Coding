#include <stdio.h>
int ans;
void num_2(int x){
	while(x != 0){
		if(x % 10 == 2)	ans++;
		x /= 10;
	}
}

int main(){
	int l, r;
	ans = 0;
	scanf("%d%d", &l, &r);
	for(int i = l; i <= r; i++){
		num_2(i);
	}
	printf("%d\n", ans);
	return 0;
} 
