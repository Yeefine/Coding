#include <stdio.h>

int fish[105];
int main(){
	int n, cnt;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &fish[i]);
	}
	for(int i = 0; i < n; i++){
		cnt = 0; 
		if(i == 0)	printf("0");
		else{
			for(int j = 0; j < i; j++){
				if(fish[j] < fish[i])	cnt++;
			}
			printf(" %d", cnt);
		}
	}
	return 0;
}
