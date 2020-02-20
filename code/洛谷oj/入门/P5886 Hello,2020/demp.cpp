#include <bits/stdc++.h>
using namespace std;

int buf[1000001];

int main(){
	int n, m, p;
	scanf("%d%d%d", &n, &m, &p);
	for(int i = 0; i < 1000001; i++){
		buf[i] = 0;
	}
	while(n--){
		int k;
		scanf("%d", &k);
		while(k--){
			int x;
			scanf("%d", &x);
			buf[x]++;
		}
	}
	int cnt = 0;
	for(int i = 1; i <= m; i++){
		if(buf[i] == p)	buf[cnt++] = i;	
	}
	printf("%d\n", cnt);
	for(int i = 0; i < cnt; i++){
		printf("%d ", buf[i]);
	}
	printf("\n"); 
	return 0;
} 
