#include <bits/stdc++.h>
using namespace std;

int num[42] = {0};

int main(){
	int ans = 0;
	for(int i = 0; i < 10; i++){
		int x;
		scanf("%d", &x);
		x %= 42;
		if(num[x] == 0){
			num[x] = 1;
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
