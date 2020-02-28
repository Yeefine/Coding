#include <stdio.h>

int maze[201][201];

int main(){
	int n;
	scanf("%d", &n);
	int m, i = 1, j = 1, flag = 0, cnt = 0;
	while(cnt < n*n){
		scanf("%d", &m);
		cnt += m;
		while(m > 0){
			maze[i][j] = flag;
			if(j == n){
				i++;
				j = 1;
			}else{
				j++;
			}	
			m--; 
		}
		flag = !flag;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("%d", maze[i][j]);
		}
		printf("\n");
	}
	return 0; 
}
