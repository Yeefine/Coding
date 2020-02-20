#include <bits/stdc++.h>
using namespace std;

char str[1001];
int m;
int main(){
	scanf("%d%s", &m, str);
	int len = strlen(str);
	int c = len - 1;
	string s = "";
	char k = m + '0';
	for(int i = 0; i < len; i++){
		if(str[i] == '0'){
			c--;
			continue;
		}
		if(i != 0)	s += '+';
		char str1[10];
		sprintf(str1, "%d", c);
		c--;
		s = s + str[i] + '*' + k + '^' + str1;
	}	
	puts(s.c_str());
	return 0;
}

