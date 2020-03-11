#include <stdio.h>
#include <algorithm>
using namespace std;
int dis[15005];

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int n, m, a, b, ans = 0;
	scanf("%d%d", &n, &m);
	scanf("%d", &dis[0]);
	a = dis[0];
	for(int i = 1; i < n; i++){
		scanf("%d", &b);
		dis[i] = b-a;
		a = b;
		ans += dis[i];
	}
	sort(dis+1, dis+n, cmp);
	for(int i = 1; i < m; i++){
		ans -= dis[i];
	}
	printf("%d\n", ans);
	return 0;
}
