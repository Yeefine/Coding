#include <stdio.h>
#include <algorithm>
using namespace std;

int td[15];
int sd[15];
int minn = 0x7fffffff;
int n;

void dfs(int i, int nowtd, int nowsd){
	if(i >= n){
		if(nowtd == 0 && nowsd == 1)	return ;
		minn = min(abs(nowtd - nowsd), minn);
		return ;
	}
	dfs(i+1, nowtd+td[i], nowsd*sd[i]);
	dfs(i+1, nowtd, nowsd);
} 

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &sd[i], &td[i]);
	}
	dfs(0, 0, 1);
	printf("%d\n", minn);
	return 0;
}
 
