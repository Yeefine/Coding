#include<stdio.h>
#include<algorithm>
using namespace std;
long long maze[1005][1005];

int main(){
	long long n, sum, maxn = 0, flag = 0;
	scanf("%lld", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			scanf("%lld", &maze[i][j]);
		}
	}
	for(int i = 1; i <= n; i++){
		sum = 0;
		for(int j = 1; j <= n; j++)	sum += maze[i][j];
		maze[i][n+1] = sum;
	}
	for(int j = 1; j <= n; j++){
		sum = 0;
		for(int i = 1; i <= n; i++)	sum += maze[i][j];
		maze[n+1][j] = sum;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(maze[i][j] == 0){
				sum = maze[i][n+1] + maze[n+1][j];
				flag = 1;
			}
			maxn = max(maxn, sum);
		}
	}
	if(flag == 0)	puts("Bad Game!");
	else	printf("%lld\n", maxn);
	return 0;
} 
