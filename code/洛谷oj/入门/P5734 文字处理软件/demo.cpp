#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, a, b, len, t;
	string s;
	string tmp;
	cin >> n >> s;
	while(n--){
		scanf("%d", &k);
		if(k == 1){
			cin >> tmp;
			s += tmp;
		}else if(k == 2){
			cin >> a >> b;
			len = s.size();
			s.erase(a+b, len-a-b);
			s.erase(0,a);
		}else if(k == 3){
			cin >> a >> tmp;
			s.insert(a, tmp);
		}else if(k == 4){
			cin >> tmp;
			t = s.find(tmp, 0);
			if(t == string::npos){
				cout << -1 << endl;;
				continue; 
			}
			cout << t << endl;
			continue; 
		}
		cout << s << endl;
	}
	return 0;
}
