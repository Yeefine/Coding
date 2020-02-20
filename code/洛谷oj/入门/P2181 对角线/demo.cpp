#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	unsigned long long ans;
	ans = n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4;
	cout << ans << endl;
	return 0;
}
