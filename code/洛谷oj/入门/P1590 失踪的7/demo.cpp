#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int tmp = n;
		int x, cnt = 0, c = 0;
		while(tmp != 0){
			x = tmp % 10;
			if(x > 7)	x -= 1;
			cnt += x *  pow(9, c++);
			tmp /= 10;
		} 
		printf("%d\n", cnt);
	}
	return 0;
} 
