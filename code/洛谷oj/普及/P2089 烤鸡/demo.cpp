#include<stdio.h>
int ans1, n;
int ans2[10005][11], a[11]; 
void dfs(int t, int m){
	if(t > 10){
		if(m == n){
			ans1++;
			for(int i = 1; i <= 10; i++){
				ans2[ans1][i] = a[i];
			}
		}
		return ;
	}else{
		for(int i = 1; i <= 3; i++){
			if(m + i > n)	break;
			a[t] = i;
			dfs(t+1, m+i);
		}
	}
}

int main(){
	scanf("%d", &n);
	ans1 = 0;
	dfs(1, 0);
	printf("%d\n", ans1);
	for(int i = 1; i <= ans1; i++){
		for(int j = 1; j <= 10; j++){
			if(j != 1)	printf(" ");
			printf("%d", ans2[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
