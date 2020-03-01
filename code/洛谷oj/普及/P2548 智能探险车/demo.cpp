#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

string word[101];

int main(){
	int n, m;
	string s;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> word[i];
	}
	for(int i = 1; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> s;
			if(s != word[j])	word[j] = '*';
		}
	}
	cout << word[0];
	for(int i = 1; i < n; i++){
		cout << ' ' << word[i];
	}
	return 0;
}
