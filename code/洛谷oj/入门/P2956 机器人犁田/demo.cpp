#include <bits/stdc++.h>
using namespace std;

int X, Y, l, cnt;
int maze[250][250];


int main(){
	cnt = 0;
	scanf("%d%d%d", &X, &Y, &l);
	for(int i = 1; i < 250; i++){
		for(int j = 1; j < 250; j++){
			maze[i][j] = 0;
		}
	}
	while(l--){
		int x1, y1, x2, y2;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		for(int i = x1; i <= x2; i++){
			for(int j = y1; j <= y2; j++){
				if(maze[i][j] == 0){
					cnt++;
					maze[i][j] = 1;
				}
			}
		}
	}
	
	printf("%d\n", cnt);
	return 0;	
}
