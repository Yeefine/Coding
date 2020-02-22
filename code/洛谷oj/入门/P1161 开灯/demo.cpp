#include <bits/stdc++.h>
using namespace std;

bool light[2000001];

int main(){
	for(int i = 1; i <= 2000001; i++)	light[i] = false;
	int n, ans;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		double a;
		int t, tmp;
		scanf("%lf%d", &a, &t);
		for(int j = 1; j <= t; j++){
			tmp = floor(a * j);
			light[tmp] = !light[tmp];
		}
	}
	for(int i = 1; i <= 2000001; i++){
		if(light[i] == true){
			ans = i;
			break;
		}
	}
	printf("%d\n", ans);
	return 0;
} 
