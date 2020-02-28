#include <bits/stdc++.h>
using namespace std;

int cows[1000001];

int main(){
	int n, d;
	cin >> n >> d;
	for(int i = 1; i <= n; i++){
		cin >> cows[i];
	}
	int cnt = 0;
	for(int i = 1; i < n; i++){
		for(int j = i + 1; cows[j] - cows[i] <= d && j <= n; j++)	cnt++;
	}
	cout << cnt << endl;
	return 0;
}
