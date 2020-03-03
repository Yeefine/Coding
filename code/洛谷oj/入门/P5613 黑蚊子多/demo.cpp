#include <stdio.h>
int a[11];

int main(){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 0; i < k; i++){
		scanf("%d", &a[i]);
	}
	int now = 0, time = 0, current = 0;
	while(now < n){
		time++;
		now += m;
		if(now == a[current]){
			m++;
			current++;
		}
	}
	printf("%d\n", time);
	return 0;
}
