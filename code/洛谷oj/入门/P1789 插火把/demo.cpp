#include <stdio.h>
#include <math.h>
using namespace std;

int s[101][101];
int n, m, k, a, b, cnt;
bool pd(int x, int y){
	if(x < 1 || x > n || y < 1 || y > n)	return false;
	return true;
}

int main(){
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			s[i][j] = 0;
		}
	}
	cnt = 0;
	for(int i = 1; i <= m + k; i++){
		scanf("%d%d", &a, &b);
		for(int x = -2; x <= 2; x++){
			for(int y = -2; y <= 2; y++){
				if((i > m || abs(x) + abs(y) <= 2) && pd(x+a, y+b)){  // abs这步把3*3方阵的 最外围除了每条边中间的点之外 排除 
					if(s[x+a][y+b] == 0){
						s[x+a][y+b] = 1;
						cnt++;
					}
				}
			}
		}
	}
	printf("%d\n", n*n - cnt);
	return 0;
}
