#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
	string s1, s2="";
	int cnt, k = 0;
	cin >> s1;
	if(s1[0] == '-'){
		s2 += "-";
		cnt = 1;
		for(int i = s1.size()-1; i >= 1; i--){
			if(s1[i] != '0')	k++;
			if(k != 0)	s2 += s1[i];
		}
	}else{
		cnt = 0;
		for(int i = s1.size()-1; i >= 0; i--){
			if(s1[i] != '0')	k++;
			if(k != 0){
				s2 += s1[i];
			}	
		}
	}
	if(s1 == "0")	cout << 0 << endl;
	else cout << s2 << endl;
	return 0;
} 
