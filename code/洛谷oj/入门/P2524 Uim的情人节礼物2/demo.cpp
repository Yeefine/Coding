#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt = 0;
	char num[15];
	scanf("%d%s", &n, num);
	while(prev_permutation(num, num + n) != false)	cnt++;
	printf("%d\n", cnt+1);
	return 0;
} 
