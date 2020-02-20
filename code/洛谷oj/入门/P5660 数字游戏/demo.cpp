#include <bits/stdc++.h>
using namespace std;

int main(){
	char str[8];
	char c; 
	int cnt = 0;
	for(int i = 0; i < 8; i++){
		scanf("%c", &c);
		if(c == '1')	cnt++;
	} 
	printf("%d\n", cnt);
	return 0;
}
