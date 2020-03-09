#include<stdio.h>
#include <algorithm>
using namespace std;
#define N 100005

long long attack[N];
long long defend[N];

int main(){
	int m, n, now = 1;
	scanf("%d%d", &m, &n);
	for(int i = 1; i <= m; i++)	scanf("%lld", &defend[i]);
	for(int i = 1; i <= n; i++)	scanf("%lld", &attack[i]);
	sort(defend+1, defend+m+1);
	sort(attack+1, attack+n+1);
	for(int i = 1; i <= n; i++){
		if(defend[now] == 0)	now++;
		if(defend[now] < attack[i] && defend[now] != 0){
			attack[i] = 0;
			now++;
		}
	}
	if(now <= m)	printf("0\n");
	else{
		long long tmp = 0;
		for(int i = 1; i <= n; i++)	tmp+=attack[i];
		printf("%lld\n", tmp);
	}
	return 0;
}
