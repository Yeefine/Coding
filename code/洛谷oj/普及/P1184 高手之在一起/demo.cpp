#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	set<string> buf;
	int n, m, cnt = 0;
	scanf("%d%d", &n, &m);
	getline(cin, str); //把数字后面乱七八糟的东西读干净
	printf("test1: %s\n", str.c_str());
	for(int i = 0; i < n; i++){
		getline(cin, str);
		printf("test2: %s\n", str.c_str());
		if(str[str.size()-1] != (char)13)	str += char(13);  //最后一个是否是' '
		buf.insert(str);
	}
	
	for(int i = 0; i < m; i++){
		getline(cin, str);
		if(str[str.size()-1] != (char)13)	str += char(13);
		if(buf.find(str) != buf.end())	cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
