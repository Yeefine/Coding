#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int ans = 0, c = 1; 
	cin >> s;
	int l = s[0] - '0';
	ans += l*c;
	c++;
	for(int i = 2; i <= 10; i++){
		if(s[i] == '-')	continue;
		int tmp = s[i] - '0';
		ans += c*tmp;
		c++;
	}
	int x = ans % 11;
	char n;
	if(x < 10)	n = x + '0';
	else n = 'X';
	
	if(n == s[12]){
		printf("Right\n");
	}else{
		for(int i = 0; i < 12; i++){
			printf("%c", s[i]);
		}
		printf("%c", n);
	}
	return 0;
}
