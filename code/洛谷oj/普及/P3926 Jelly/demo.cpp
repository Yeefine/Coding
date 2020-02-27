#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, c, p, q, r, x, t;
	cin >> a >> c >> p >> q >> r >> x;
	if(x <= (c - a) * p)	t = x / p;
	else if(x <= (c - a) * p + q){
		t = c;
	}else{
		t = c + (x - (c-a)*p - q) / r;
	}
	cout << t << endl;
	return 0;
}
