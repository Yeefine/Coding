#include <bits/stdc++.h>
using namespace std;

map<char, char> var;

int main(){
	string str;
	cin >> str;
	int len = str.size();
	var['a'] = var['b'] = var['c'] = '0';
	for(int i = 0; i < len; i+=5){
		if(str[i+3] >= '0' && str[i+3] <= '9'){
			var[str[i]] = str[i+3];
		}else	var[str[i]] = var[str[i+3]];
	}
	cout << var['a'] << ' ' << var['b'] << ' ' << var['c'] << endl; 
	return 0;
}
