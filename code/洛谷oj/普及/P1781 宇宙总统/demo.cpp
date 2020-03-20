#include <bits/stdc++.h>
using namespace std;
struct E{
	string vote;
	int id;
	bool operator < (const E &A) const {
		return vote > A.vote;
	}
}P[25];
int main(){
	freopen("in.txt", "r", stdin);
	int n, l, maxn = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> P[i].vote;
		P[i].id = i+1;
		int tmp = P[i].vote.size();
		maxn = max(maxn, tmp);
	}
	for(int i = 0; i < n; i++){
		if(P[i].vote.size() < maxn){
			int x = maxn - P[i].vote.size();
			while(x--){
				P[i].vote.insert(0, "0");
			}
		}
	}
	sort(P, P+n);
	cout << P[0].id << endl;
	cout << P[0].vote << endl;
}
