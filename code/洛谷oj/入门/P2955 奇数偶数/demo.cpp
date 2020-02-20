#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		char str[62];
		scanf("%s", str);
		int len = strlen(str);
		int k = str[len-1] - '0';
		puts(k % 2 == 0 ? "even" : "odd");
	} 
	return 0;
} 
