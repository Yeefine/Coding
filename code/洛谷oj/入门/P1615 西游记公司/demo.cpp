#include <bits/stdc++.h>
using namespace std;

int main(){
	int h1, m1, s1, h2, m2, s2, k;
	char c1, c2, c3, c4;
	cin >> h1 >> c1 >> m1 >> c2 >> s1;
	cin >> h2 >> c3 >> m2 >> c4 >> s2;
	cin >> k;
	long t1, t2;
	t1 = s1 + m1 * 60 + h1 * 3600;
	t2 = s2 + m2 * 60 + h2 * 3600;
	long long ans = (t2 -t1) * k;
	cout << ans << endl;
	return 0;
}
