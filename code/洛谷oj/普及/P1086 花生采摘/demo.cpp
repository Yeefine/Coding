#include <bits/stdc++.h>
using namespace std;
struct E{
	int x;
	int y;
	int num;
	bool operator < (const E &A) const {
		return num > A.num;
	}
}buf[405];

int dis(int x1, int y1, int x2, int y2){
	return abs(x1-x2)+abs(y1-y2)+x2+1;
}

int main(){
	freopen("in.txt", "r", stdin); 
	int m, n, k, a, tmp, cnt = 0, ans = 0;
	cin >> m >> n >> k;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cin >> a;
			if(a == 0)	continue;
			buf[cnt].num = a;
			buf[cnt].x = i;
			buf[cnt].y = j;
			cnt++;
		}
	}
	sort(buf, buf+cnt);
	int t = 1, x = 1, y = buf[0].y;
	for(int i = 0; i < cnt; i++){
		tmp = dis(x, y, buf[i].x, buf[i].y);
		if(t + tmp > k)	break;
		else if(t + tmp == k){
			ans += buf[i].num;
			break;
		}else{
			ans += buf[i].num;
			t += tmp-buf[i].x;
			x = buf[i].x;
			y = buf[i].y;
		}
	}
	cout << ans << endl;
	return 0;
} 
