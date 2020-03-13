#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s, str;
	char c;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	c = getchar();
	getline(cin, str);
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	int a, flag, b = 0, cnt = 0;
	while(str.find(s, b) != string::npos){
		a = str.find(s, b);
		if((a == 0 || str[a-1] == ' ') && (str[a+s.size()] == ' ' || a+s.size() == str.size())){
			if(cnt == 0)	flag = a;
			cnt++;
		}		
		b = a+1;
	}
	if(cnt == 0)	cout << -1 << endl;
	else	cout << cnt << ' ' << flag << endl;
	return 0;
}
