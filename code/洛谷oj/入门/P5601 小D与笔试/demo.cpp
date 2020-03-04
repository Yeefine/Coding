#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

struct E{
	string question;
	string ans;
}list[101];

string ask, a, b, c, d;

int main(){
	int n, q;
	cin >> n >> q;
	for(int i = 0; i < n; i++){
		cin >> list[i].question >> list[i].ans;
	}
	for(int i = 0; i < q; i++){
		cin >> ask >> a >> b >> c >> d;
		for(int j = 0; j < n; j++){
			if(ask == list[j].question){
				if(list[j].ans == a)	cout << 'A' << endl;
				if(list[j].ans == b)	cout << 'B' << endl;
				if(list[j].ans == c)	cout << 'C' << endl;
				if(list[j].ans == d)	cout << 'D' << endl;
			}
		}
	}
	return 0;
} 
