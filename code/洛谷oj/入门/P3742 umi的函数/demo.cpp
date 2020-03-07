#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int n;
	string x, z, y = "";
	cin >> n;
	cin >> x;
	cin >> z;
	for(int i = 0; i < n; i++){	
		if(x[i] < z[i]){
			cout << "-1" << endl;
			return 0;
		}
	}
	cout << z << endl;
	return 0;
}
