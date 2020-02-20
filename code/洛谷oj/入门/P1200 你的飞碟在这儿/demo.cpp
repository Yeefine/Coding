#include <bits/stdc++.h>
using namespace std;

int main(){
	char str1[6], str2[6];
	scanf("%s%s", str1, str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int num1 = 1, num2 = 1;
	for(int i = 0; i < len1; i++){
		num1 *= str1[i] - 'A' + 1;
	}
	for(int i = 0; i < len2; i++){
		num2 *= str2[i] - 'A' + 1;
	}
	if(num1 % 47 == num2 % 47)	puts("GO");
	else	puts("STAY");
	return 0;
} 
