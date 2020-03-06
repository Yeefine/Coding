#include <stdio.h>
#include <iostream>
using namespace std;
int team[10001];
char M[10001];
int main(){
	int n1, n2, t, size=0;
	char s1[100], s2[100];
	cin >> n1 >> n2;
	cin >> s1;
	for(int i = n1-1; i >= 0; i--){
		M[n2+n1-i] = s1[i];
		team[size++] = n2+n1-i;
	}
	cin >> s2;
	for(int i = 0; i < n2; i++){
		M[i+1] = s2[i];
		team[size++] = i+1;
	}
	cin >> t;
	while(t--){
		for(int i = 1; i < n1+n2; i++){
			if(team[i] < team[i-1]){
				int tmp = team[i];
				team[i] = team[i-1];
				team[i-1] = tmp;
				i++;
			}
		}
	}
	for(int i = 0; i < n1+n2; i++){
		cout << M[team[i]]; 
	}
	return 0;
}
