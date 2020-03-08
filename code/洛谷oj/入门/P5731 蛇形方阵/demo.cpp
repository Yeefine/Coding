#include <stdio.h>

int list[10][10];

void init(){
	for(int i = 1; i < 10; i++){
		for(int j = 1; j < 10; j++){
			list[i][j] = 0;
		}
	}
}

int main(){
	init(); 
	int n, i = 1, j = 0, cnt = 1;
	scanf("%d", &n);
	while(cnt <= n*n){
		for(j = j+1; j <= n; j++){
			if(list[i][j] != 0) break;
			list[i][j] = cnt++;
			if(cnt > n*n)	break;
		}
		if(cnt > n*n)	break;
		j--;
		for(i = i+1; i <= n; i++){
			if(list[i][j] != 0)	break;
			list[i][j] = cnt++;
			if(cnt > n*n)	break;
		}
		if(cnt > n*n)	break;
		i--;
		for(j = j-1; j > 0; j--){
			if(list[i][j] != 0)	break;
			list[i][j] = cnt++;
			if(cnt > n*n)	break;	
		}
		if(cnt >= n*n)	break;	
		j++;
		for(i = i-1; i > 0; i--){
			if(list[i][j] != 0)	break;
			list[i][j] = cnt++;
		}
		i++;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(list[i][j] < 10)	printf("  %d", list[i][j]);
			else	printf(" %d", list[i][j]);
		}
		printf("\n");
	}
	return 0;
}
