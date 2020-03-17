#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int w = 0, l = 0, cnt = 0, flag = 0, x = 0;
	string tmp, s = "";
	while(cin >> tmp){
		for(int i = 0; i < tmp.size(); i++){
			if(tmp[i] == 'E'){
				x = 1;
				break;
			}
			s += tmp[i];
		}
		if(x == 1)	break;
	}
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'W')	w++;	
		else if(s[i] == 'L')	l++;	
		if(w >= 11 || l >= 11)	flag = 1;
		if(flag == 1 && abs(w-l) >= 2 || i == s.size()-1){
//			if(w == 0 && l == 0 && cnt == 1)	continue;
			cout << w << ":" << l << endl;
			if(flag == 1 && abs(w-l) >= 2 && i == s.size()-1)	cout << 0 << ":" << 0 << endl;  
			w = 0;
			l = 0;
			flag = 0;
			cnt = 1; 
			
		}
	}
	if(s == "")	cout << 0 << ":" << 0 << endl; 
	cout << endl;
	w = 0, l = 0, flag = 0, cnt = 0; 
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'W')	w++;	
		else if(s[i] == 'L')	l++;	
		if(w >= 21 || l >= 21)	flag = 1;
		if(flag == 1 && abs(w-l) >= 2 || i == s.size()-1){
//			if(w == 0 && l == 0 && cnt == 1)	continue;
			cout << w << ":" << l << endl;
			if(flag == 1 && abs(w-l) >= 2 && i == s.size()-1)	cout << 0 << ":" << 0 << endl;
			w = 0;
			l = 0;
			flag = 0;
			cnt = 1;
			
		}
	}
	if(s == "")	cout << 0 << ":" << 0 << endl; 
	return 0;
} 
