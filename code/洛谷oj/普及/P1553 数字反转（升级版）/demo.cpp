#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int a, b, c, k, x1, x2;
string str, s1, s2, tmp;

void Reserve_frac(int b){
	s1 = "", s2 = "";
	x1 = 0, x2 = 0;
	for(int i = b-1; i >= 0; i--)	x1 = x1 * 10 + str[i] - '0';
	for(int i = str.size()-1; i > b; i--)	x2 = x2 * 10 + str[i] - '0';
	if(x1 == 0)	s1 += "0";
	else{
		k = 0;
		for(int i = b-1; i >= 0; i--){
			if(str[i] != '0')	k++;
			if(k != 0)	s1 += str[i];
		}	
		for(int i = s1.size()-1; i >= 0; i--){
			if(s1[i] != '0'){
				s1.erase(i+1);
				break;
			}
		}
	}
	if(x2 == 0)	s2 += "0";
	else {
		k = 0;
		for(int i = str.size()-1; i > b; i--){
			if(str[i] != '0')	k++;
			if(k != 0)	s2 += str[i];
		}	
		for(int i = s2.size()-1; i >= 0; i--){
			if(s2[i] != '0'){
				s2.erase(i+1);
				break;
			}
		}
	}
	cout << s1 << "/" << s2;
}

void Reserve_decimal(int b){
	s1 = "", s2 = "";
	x1 = 0, x2 = 0;
	for(int i = b-1; i >= 0; i--)	x1 = x1 * 10 + str[i] - '0';
	for(int i = str.size()-1; i > b; i--)	x2 = x2 * 10 + str[i] - '0';
	if(x1 == 0)	s1 += "0";
	else{
		k = 0;
		for(int i = b-1; i >= 0; i--){
			if(str[i] != '0')	k++;
			if(k != 0)	s1 += str[i];
		}
		for(int i = s1.size()-1; i >= 0; i--){
			if(s1[i] != '0'){
				s1.erase(i+1);
				break;
			}
		}
	}
	if(x2 == 0)	s2 += "0";
	else {
		k = 0;
		for(int i = str.size()-1; i > b; i--){
			if(str[i] != '0')	k++;
			if(k != 0)	s2 += str[i];
		}	
		for(int i = s2.size()-1; i >= 0; i--){
			if(s2[i] != '0'){
				s2.erase(i+1);
				break;
			}
		}
	}
	cout << s1 << "." << s2;
}

void Reserve_prec(int b){
	k = 0, x1 = 0;
	s1 = "";
	for(int i = b-1; i >= 0; i--)	x1 = x1 * 10 + str[i] - '0';
	if(x1 != 0){
		for(int i = str.size()-2; i >= 0; i--){
			if(str[i] != '0')	k++;
			if(k != 0)	s1 += str[i];
		}	
	}else	s1 += "0";
	cout << s1 << '%' << endl;
}

void Reserve_num(string str){
	s1 = "";
	k = 0, x1 = 0;
	for(int i = str.size()-1; i >= 0; i--)	x1 = x1 * 10 + str[i] - '0';
	if(x1 != 0){
		for(int i = str.size()-1; i >= 0; i--){
			if(str[i] != '0')	k++;
			if(k != 0)	s1 += str[i];
		}
	}else	s1 += "0";
	
	cout << s1 << endl;
}
int main(){
	cin >> str;
	a = str.find('.', 0);
	b = str.find('/', 0);
	c = str.find('%', 0);
	if(a != string::npos)	Reserve_decimal(a);
	else if(b != string::npos)	Reserve_frac(b);
	else if(c == str.size()-1)	Reserve_prec(c);
	else	Reserve_num(str); 
	return 0;
}
