#include <stdio.h>

int ans[34] = {0};
int award[8] = {0};

int main(){
	int n, tmp, cnt;
	scanf("%d", &n);
	for(int i = 1; i <= 7; i++){
		scanf("%d", &tmp);
		ans[tmp] = 1;
	}
	while(n--){
		cnt = 0;
		for(int i = 1; i <= 7; i++){
			scanf("%d", &tmp);
			if(ans[tmp] == 1)	cnt++;
		}
		award[cnt]++;
	}
	for(int i = 7; i > 0; i--){
		if(i != 7)	printf(" ");
		printf("%d", award[i]);
	}
	return 0;
}
