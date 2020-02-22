#include <bits/stdc++.h>
using namespace std;

long long SH[100000001], KC[100000001];

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int t1 = 0, t2 = 0;
	SH[0] = KC[0] = 0;
	int total_t = 0;
	while(n--){
		int v, t;
		scanf("%d%d", &v, &t);
		total_t += t;
		for(int i = 1; i <= t; i++){
			int tmp = SH[t1+i-1];
			SH[t1+i] = tmp + v;
		}
		t1 += t;
	}
	
	while(m--){
		int v, t;
		scanf("%d%d", &v, &t);
		for(int i = 1; i <= t; i++){
			int tmp = KC[t2+i-1];
			KC[t2+i] = tmp + v;
		}
		t2 += t;
	}
	
	int ans = 0;
	for(int i = 1; i <= total_t; i++){
		if(SH[i-1] == KC[i-1] && SH[i] != KC[i]){
			ans++;
		} else if(SH[i-1] < KC[i-1] && SH[i] > KC[i]) 	ans++;
		else if(SH[i-1] > KC[i-1] && SH[i] < KC[i])		ans++;
	}
	if(ans == 0)	printf("0\n");
	else	printf("%d\n", ans-1);
	return 0;
}
