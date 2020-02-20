#include <bits/stdc++.h>
using namespace std;

int cnt;

int main(){
	int n, k;
	cnt = 0;
	scanf("%d", &n);
	int a = 0;
	for(int i = 0; i < n; i++){
		int b;
		scanf("%d", &b);
		if(b < a)	k = 1;
		if(a < b && k == 1)	{
			cnt++;
			k = 0;	
		}
		a = b;
	}
	printf("%d\n", cnt);
	return 0;
}
