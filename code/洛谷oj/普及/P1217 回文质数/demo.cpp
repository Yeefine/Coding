#include <stdio.h>
#include <math.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;

int prime[10000005] = {0};
bool flag[10000005];
int pp[10000005] = {0};
int primeSize, a, b;

void init(){
	primeSize = 0;
	for(int i = 0; i <= b; i++)	flag[i] = 0;
	for(int i = 2; i <= b; i++){
		if(flag[i] == 0){
			prime[primeSize++] = i;
			pp[i] = 1;
		}
		for(int j = 0; j < primeSize && i * prime[j] <= b; j++){
			flag[i * prime[j]] = 1;
			if(i % prime[j] == 0)	break;
		}
	}
}

bool f(int x){
	char str[10];
	string str1, str2 = "";
	sprintf(str, "%d", x);
	for(int i = strlen(str)-1; i >= 0; i--)	str2 += str[i];
	str1 = str;
	if(str1 == str2)	return true;
	return false;
}

int main(){
	cin >> a >> b;
	if(b > 10000000)	b = 10000000;
	init();
	for(int i = a; i <= b; i++){
		if(pp[i] == 1 && f(i))	cout << i << endl;
	}
	return 0;
}
