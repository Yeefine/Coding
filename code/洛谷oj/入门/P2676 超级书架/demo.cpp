#include <bits/stdc++.h>
using namespace std;

int height[20001];

bool cmp(int x, int y){
	return x > y;
}

int main(){
	int n;
	long long b; 
	scanf("%d%d", &n, &b);
	for(int i = 0; i < n; i++){
		scanf("%d", &height[i]);
	}
	sort(height, height + n, cmp);
	int ans = 0;
	long long tmp = 0;
	for(int i = 0; i < n; i++){
		if(tmp >= b)	break;
		tmp += height[i];
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
