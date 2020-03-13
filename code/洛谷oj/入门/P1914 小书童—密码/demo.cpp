#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int n;
	string str;
	cin >> n >> str;
	for(int i = 0; i < str.size(); i++){
		str[i] = (str[i] - 'a' + n) % 26 + 'a';
	}
	puts(str.c_str());
	return 0;
}
