#include <bits/stdc++.h>
using namespace std;

int num[10];

void F(int x){
	while(x != 0){
		int tmp = x % 10;
		x /= 10;
		num[tmp] = 1;
	}
}

int main(){
	int a, b, c;
	for(a = 123; a < 333; a++){
		for(int i = 0; i <= 9; i++)	num[i] = 0;
		b = 2 * a;
		c = 3 * a;
		F(a);
		F(b);
		F(c);
		int k = 0;
		for(int i = 1; i <= 9; i++){
			if(num[i] == 0)	{
				k = 1;
				break;
			}
		}
		if(k == 1)	continue;
		else{
			printf("%d %d %d\n", a, b, c);
		}
	}
}
