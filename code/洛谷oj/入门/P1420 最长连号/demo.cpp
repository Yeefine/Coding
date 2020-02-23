#include <bits/stdc++.h>
using namespace std;

int num[10001];

int main(){
	int n, max = 0, cnt = 1;
	scanf("%d", &n);
	for(int i = 1; i <= n ;i++){
		scanf("%d", &num[i]);
	}
	for(int i = 2; i <= n; i++){
		if(num[i] - num[i-1] != 1){
			if(cnt > max)	max = cnt;
			cnt = 1;
		}else	cnt++;
	}
	printf("%d\n", max);
	return 0;
} 
