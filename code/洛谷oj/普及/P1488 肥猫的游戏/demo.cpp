#include <bits/stdc++.h>
using namespace std;

int buf[50002];

int read(){
	int x = 0;
	char c = getchar();
	while(c > '9' || c < '0')	c = getchar();
	while(c >= '0' && c <= '9'){
		x = x * 10 + c - '0';
		c = getchar();
	}
	return x;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)	buf[i] = 0;
	int _a, _b, _c;
	_a = read(), _b = read(), _c = read();
	buf[_a]++;
	buf[_b]++;
	buf[_c]++;
	for(int i = 1 ; i <= n-3; i++){
		int a, b, c;
		a = read(), b = read(), c = read();
		buf[a]++;
		buf[b]++;
		buf[c]++;
	}
	if(buf[_a] == 1 || buf[_b] == 1 || buf[_c] == 1)	puts("JMcat Win.");
	else if((n-2)%2 == 1)	puts("PZ Win.");
	else	puts("JMcat Win.");
	return 0;
}
