#include <stdio.h>
#include <iostream>
#include <math.h> 
using namespace std;

double dis(int x1, int y1, int x2, int y2){
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
} 

int main(){
	int n, m, k, t, maxn = 0;
	cin >> n >> m >> k >> t;
	while(k--){
		int x, y, ans = 0;
		cin >> x >> y;
		for(int i = max(x-t, 1); i <= min(x+t, n); i++){
			for(int j = max(y-t, 1); j <= min(y+t, m); j++){
				if(dis(x, y, i, j) <= t)	ans++;
			}
		}
		if(maxn < ans)	maxn = ans;
	}
	cout << maxn << endl;
	return 0;
}

