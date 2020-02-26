#include<bits/stdc++.h>
using namespace std;

int ans, l, h, n; 
bool hotel[7010] = {0};

void F(int m){
	if(m == 7000){
		ans++;
		return;
	}
	for(int i = l; i <= h && i+m <= 7000; i++){
		if(hotel[i+m] == 1)	F(i+m);
	}
}

int main(){
	hotel[0] = 1, hotel[990] = 1, hotel[1010] = 1, hotel[1970] = 1, hotel[2030] = 1, hotel[2940] = 1, hotel[3060] = 1, hotel[3930] = 1, hotel[4060] = 1, hotel[4970] = 1, hotel[5030] = 1, hotel[5990] = 1, hotel[6010] = 1, hotel[7000] = 1;
	ans = 0;
	cin >> l >> h;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		hotel[x] = 1;
	} 
	F(0);
	cout << ans << endl;
	return 0;
}
