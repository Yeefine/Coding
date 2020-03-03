#include <stdio.h>
#include <iostream>
using namespace std; 
char team[30];
int cnt;
char tmp;
int main(){
	int n;
	cnt = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> team[i];
	}
	for(int i = 0; i < n; i++){
		if(i == 0){
			cnt = 1;
			continue;
		}	
		if(team[i] != team[i-1])	cnt++;
	}
	printf("%d\n", cnt+1);
	return 0;
}
