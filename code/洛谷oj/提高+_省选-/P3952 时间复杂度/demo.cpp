#include <bits/stdc++.h>
using namespace std;
string a, b;  //循环使用
int c, d, e, f[27], g[27], h, k, l[100], m, n, o;
/*
	c是有几个句子，d是题目给的复杂度是多少
	e是当前在几重循环，f[]是判断变量是否使用过
	g[]是存下每个循环的变量，h是当前复杂度是多少(与e不同）
	k是判断下面程序是否进行，l[]是存下那几个循环加了复杂度
	m是当前最大复杂度，n是存下k=1时的循环数
	o是数据组数 
*/ 
int main(){
	freopen("in.txt", "r", stdin);
	cin >> o;
	while(o--){
		c = 0, d = 0, e = 0, h = 0, k = 0, m = 0, n = 0;
		memset(f, 0, sizeof(f));
		memset(l, 0, sizeof(l));
		do{
			a = b;
			cin >> b;
		}while(b[0] != 'O');
		for(int i = 0; i < a.size(); i++)	c = c*10 + a[i] - '0';
		for(int i = 4; i < b.size()-1; i++)	d = d*10 + b[i] - '0';
		while(c > 0){
			c--;
			cin >> a;
			if(a[0] == 'F'){
				e++;
				cin >> a;
				if(f[a[0] - 'a'] == 1)	e = -1;
				else {
					f[a[0] - 'a'] = 1;
					g[e] = a[0] - 'a';
				}
				cin >> a >> b;
				if(a[0] != 'n' && b[0] == 'n' && k == 0){
					h++;
					l[e] = 1;
				}else if(((a.size() == b.size() && a > b) || (a.size() > b.size()) || (a[0] == 'n' && b[0] != 'n')) && k == 0){
					k = 1;
					n = e;
				}
			}else {
				m = max(m, h);
				f[g[e]] = 0;
				if(l[e] == 1){
					h--;
					l[e] = 0;
				}
				e--;
				if(n > 0 && e < n){
					k = 0;
					n = 0;
				}
			} 
			if(e == -1){
				cout << "ERR" << endl;
				c = -1;
			}
		}
		if(e > 0)	cout << "ERR" << endl;
		if(e == 0 && m == d)	cout << "Yes" << endl;
		if(e == 0 && m != d)	cout << "No" << endl;
	}
	return 0;
}
