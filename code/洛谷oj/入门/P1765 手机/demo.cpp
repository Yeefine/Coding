#include <bits/stdc++.h>
using namespace std;

map<char, int> num;

int main(){
	num['a'] = 1, num['d'] = 1, num['g'] = 1, num['j'] = 1, num['m'] = 1, num['p'] = 1, num['t'] = 1, num['w'] = 1, num[' '] = 1;
	num['b'] = 2, num['e'] = 2, num['h'] = 2, num['k'] = 2, num['n'] = 2, num['q'] = 2, num['u'] = 2, num['x'] = 2;
	num['c'] = 3, num['f'] = 3, num['i'] = 3, num['l'] = 3, num['o'] = 3, num['r'] = 3, num['v'] = 3, num['y'] = 3;
	num['s'] = 4, num['z'] = 4; 
	char str[220];
	cin.getline(str, 220);

	int len = strlen(str);
	int ans = 0;
	for(int i = 0; i < len; i++){
		ans += num[str[i]];
		printf("%c %d %d\n", str[i], num[str[i]], ans);
	}
	printf("%d\n", ans);
	return 0;
} 
