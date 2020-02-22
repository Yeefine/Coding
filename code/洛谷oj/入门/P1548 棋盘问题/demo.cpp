#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, ans1 = 0, ans2 = 0;
	scanf("%d%d", &n, &m);
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= m; j++){
			for(int p = i+1; p <= n; p++){
				for(int q = j+1; q <= m; q++){
					if(p-i == q-j)	ans1++;
					else	ans2++;
				}
			}
		}
	}
	printf("%d %d\n", ans1, ans2);
	return 0;
} 
