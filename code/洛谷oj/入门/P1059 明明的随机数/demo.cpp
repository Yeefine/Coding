#include <bits/stdc++.h>
using namespace std;

int num[101];

int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	sort(num, num + n);
	for(int i = 0; i < n; i++){
		if(i != 0){
			if(num[i] != num[i - 1])	num[cnt++] = num[i];
			else	continue;
		}else	num[cnt++] = num[i];
	}
	printf("%d\n", cnt);
	for(int i = 0; i < cnt; i++){
		if(i != 0)	printf(" ");
		printf("%d", num[i]);
	}
	printf("\n");
	return 0;
}
