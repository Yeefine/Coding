#include <bits/stdc++.h>
using namespace std;

char str[255];
stack<char> S;

int main(){
	while(S.empty() == false)	S.pop();
	bool flag = true;
	char c;
	int i = 0, k = 0;
	for(;;i++){
		c = getchar();
		if(c == '('){
			S.push(c);
			k = 1;
		}	
		else if(c == ')'){
			if(S.empty()){
				flag = false;
			}else{
				S.pop();
			}	
		}
		else if(c == '@'){
			puts(flag == true && k == 1 && S.empty() ? "YES" : "NO");
			return 0;
		}
	}
	return 0;
}
