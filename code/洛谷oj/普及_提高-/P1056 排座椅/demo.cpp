#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
struct E{
	int a = 0;  //¼ÆÊý 
	int b = 0;  //ºÅ 
	bool operator < (const E &A) const {
		return a > A.a;
	} 
}H[1005], L[1005];
int ans1[1005], ans2[1005];

int main(){
	int m, n, k, l, d, x1, x2, y1, y2;
	cin >> m >> n >> k >> l >> d;
	while(d--){
		cin >> x1 >> y1 >> x2 >> y2;
		if(x1 == x2){
			L[min(y1, y2)].a++;
			L[min(y1, y2)].b = min(y1, y2);
		}else if(y1 == y2){
			H[min(x1, x2)].a++;
			H[min(x1, x2)].b = min(x1, x2);
		}	
	}
	sort(L, L+1005);
	sort(H, H+1005);
	int size1 = 0, size2 = 0;
	while(k--){
		ans1[size1] = H[size1].b;
		size1++;
	}
	sort(ans1, ans1+size1);
	while(l--){
		ans2[size2] = L[size2].b;
		size2++;
	}
	sort(ans2, ans2+size2);
	for(int i = 0; i < size1; i++){
		if(i != 0)	cout << " ";
		cout << ans1[i];
	}
	cout << endl;
	for(int i = 0; i < size2; i++){
		if(i != 0)	cout << " ";
		cout << ans2[i];
	}
}

