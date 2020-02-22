#include <bits/stdc++.h>
using namespace std;

int b[1001][1001];
int a[1001][1001];
int total[1001];

int main(){
	int n, m, k;
	for(int i = 1; i <= 1000; i++){
		for(int j = 1; j <= 1000; j++){
			b[i][j] = 0;
		}
	}
	for(int i = 1; i <= 1000; i++)	total[i] = 0;
	
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(b[j][a[i][j]] == 0){
				b[j][a[i][j]] = 1;
				total[a[i][j]]++;
			}
		}
	}
	
	for(int i = 1; i <= k; i++){
		if(i != 1)	printf(" ");
		printf("%d", total[i]);
	}
	return 0;
}
