#include <stdio.h>

struct E{
	double a;
	double b;
}list[30001];

int ans[30001];

int main(){
	int k, m, n;
	scanf("%d%d%d", &k, &m, &n);
	for(int i = 1; i <= m; i++){
		scanf("%lf%lf", &list[i].a, &list[i].b);
	}

	int cnt = 0;
	for(int i = 1; i <= m; i++){
		if(list[i].a == 0){
			if(list[i].b != 0){
				ans[cnt++] = i;
			}
			continue;
		} 
		int tmp = k / list[i].a;
		if(list[i].a <= k && list[i].b * tmp >= n){
			ans[cnt++] = i;
		}
	}
	if(cnt == 0){
		printf("-1\n");
		return 0;
	}
	for(int i = 0; i < cnt; i++){
		if(i != 0)	printf(" ");
		printf("%d", ans[i]);
	}
	printf("\n");
	return 0;
} 
