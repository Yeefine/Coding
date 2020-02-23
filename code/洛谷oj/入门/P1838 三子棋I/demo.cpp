#include <bits/stdc++.h>
using namespace std;

int maze[10];

int main(){
	char str[13];
	scanf("%s", str);
	int len = strlen(str);
	int now = 0;
	for(int i = 0; i < len; i++){
		int x = str[i] - '0';
		maze[x] = now;
		now = !now;
	}
	int ans = 2;
	if(maze[1] == maze[2] && maze[1] == maze[3] && maze[2] == maze[3])	ans = maze[1];
	else if(maze[4] == maze[5] && maze[4] == maze[6] && maze[5] == maze[6])	ans = maze[4];
	else if(maze[7] == maze[8] && maze[8] == maze[9] && maze[7] == maze[9])	ans = maze[7];
	else if(maze[1] == maze[4] && maze[1] == maze[7] && maze[4] == maze[7])	ans = maze[1];
	else if(maze[2] == maze[5] && maze[2] == maze[8] && maze[5] == maze[8])	ans = maze[2];
	else if(maze[3] == maze[6] && maze[9] == maze[3] && maze[6] == maze[9])	ans = maze[3];
	else if(maze[1] == maze[5] && maze[1] == maze[9] && maze[5] == maze[9])	ans = maze[1];
	else if(maze[3] == maze[5] && maze[7] == maze[3] && maze[5] == maze[3])	ans = maze[3];
	if(ans == 0)	puts("xiaoa wins.");
	else if(ans == 1)	puts("uim wins.");
	else	puts("drew");
} 
