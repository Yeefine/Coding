#include <iostream>
using namespace std;
int P[25][25];
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < 25; i++){
		for(int j = 0; j < 25; j++)	P[i][j] = 0;
	}
	P[1][1] = 1; 
	cout << P[1][1] << endl;
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= i; j++){
			P[i][j] = P[i-1][j-1] + P[i-1][j];
			if(j != 1)	cout << " ";
			cout << P[i][j];
		}
		cout << endl;
	}
	return 0;
} 
