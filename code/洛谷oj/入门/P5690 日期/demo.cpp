#include <bits/stdc++.h>
using namespace std;

int DayofMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

int main(){
	string s;
	int ans = 0;
	cin >> s;
	int month = (s[0] - '0')*10 + s[1] - '0';
	int day = (s[3] - '0')*10 + s[4] - '0';
	if(month == 0){
		ans++;
		if(day > 31)	ans++;
	}	
	else if(month > 12){
		ans++;
		int tmp = month % 10;
		if(month > 12 && month < 20 || month > 12 && tmp == 0 || month > 12 && tmp == 2) {
			if(day > 31)	ans++;
		}else if (month > 20 && tmp != 0 && tmp != 2){
			if(day > DayofMonth[tmp])	ans++;
		}
	}
	else if(month > 0 && month <= 12){
		if(day > DayofMonth[month])	ans++;	
	}	
	if(day  == 0)	ans++;
	cout << ans << endl;
	return 0;
}

// ÌØÊâÇé¿ö 00-32¡¢ 22-31 
