#include <bits/stdc++.h>
using namespace std;

int maze[17][17];
int ans, a, b, n;

void dfs(int x, int y){
	if(x == a && y == b){
		ans++;
		return;
	}
	if(x+1 <= a){
		if(maze[x+1][y] == 0)	dfs(x+1, y);
	}
	if(y+1 <= b){
		if(maze[x][y+1] == 0)	dfs(x, y+1);
	}
}

int main(){
	cin >> a >> b;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			maze[i][j] = 0;
		}
	}
	cin >> n;
	while(n--){
		int x, y;
		cin >> x >> y;
		maze[x][y] = 1;
	}
	ans = 0;
	dfs(1, 1);
	cout << ans << endl;
	return 0;
}
