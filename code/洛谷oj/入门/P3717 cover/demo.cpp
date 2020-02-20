#include <bits/stdc++.h>
using namespace std;

int maze[101][101];
int cnt;

double dist(int x, int y, int a, int b){
	int tmp = (x-a)*(x-a) + (y-b)*(y-b);
	return sqrt(tmp);
}
int main(){
	cnt = 0;
	int n, m, r;
	scanf("%d%d%d", &n, &m, &r);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			maze[i][j] = 0;
		}
	}
	while(m--){
		int x, y;
		scanf("%d%d", &x, &y);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(dist(x, y, i, j) <= r && maze[i][j] == 0){
					maze[i][j] = 1;
					cnt++;
				}
			}
		}
	}
	printf("%d\n", cnt);
	return 0;
}
