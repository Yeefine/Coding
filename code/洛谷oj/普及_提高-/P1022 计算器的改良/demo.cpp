#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;
map<char, int> M;
string s;
int l, r, sum, flag;
char c;
int trans(string s, int start, int end, int dir){
	int tmp = 0;
	sum = 0;
	if(s[start] != '-')	flag = 1;
	else{
		flag = 0;
	}
	for(int i = start; i <= end; i++){
		if(s[i] >= '0' && s[i] <= '9'){
			tmp = tmp * 10 + s[i] - '0';
			if(i == end || start == end){
				if(flag == 1)	sum += tmp;
				else if(flag == 0)	sum -= tmp;
			}
		}else if(s[i] == '+'){
			if(flag == 1)	sum += tmp;
			else if(flag == 0)	sum -= tmp;
			tmp = 0;
			flag = 1;
		}else if(s[i] == '-'){
			if(flag == 1)	sum += tmp;
			else if(flag == 0)	sum -= tmp;
			tmp = 0;
			flag = 0;
		}else if(s[i] >= 'a' && s[i] <= 'z'){
			if(i == start)	tmp = 1;
			else if(i == start+1 && s[start] == '-')	tmp = 1;
			c = s[i];
			if(M.find(c) == M.end()){
				M[c] = 0;
			}	
			if(dir == 0){
				if(flag == 1)	M[c] += tmp;
				else 	M[c] -= tmp;
			}else{
				if(flag == 1)	M[c] -= tmp;
				else 	M[c] += tmp;
			}
			tmp = 0;
		}
	}
	return sum;
}

int main(){
	M.clear();
	char str[100];
	scanf("%s", str);
	s = str;
	int k = s.find("=", 0);
	l = trans(s, 0, k-1, 0);
	r = trans(s, k+1, s.size()-1, 1);
	if(r == l){
		printf("0.000\n");
	}else{
		double ans = (double)(r - l) / M[c];
		printf("%c=%.3lf\n", c, ans);	
	}
	return 0;
}
