#include <stdio.h>
int list[21][21][21] = {0}; 

int main(){
	int w, x, h, q, x1, y1, z1, x2, y2, z2, cnt = 0;
	scanf("%d%d%d", &w, &x, &h);
	scanf("%d", &q);
	while(q--){
		scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);
		for(int i = x1; i <= x2; i++){
			for(int j = y1; j <= y2; j++){
				for(int k = z1; k <= z2; k++){
					if(list[i][j][k] == 0){
						list[i][j][k] = 1;
						cnt++;
					}
				}
			}
		}
	}
	printf("%d\n", w*x*h - cnt);
	return 0;
} 
