#include <bits/stdc++.h>
using namespace std;

int Maxnumber[51];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)	scanf("%d", &Maxnumber[i]);
	sort(Maxnumber+1, Maxnumber+1+n);
	long long ans = Maxnumber[1];
	for(int i = 2; i <= n; i++){
		ans *= (Maxnumber[i] - i + 1);
		ans %= 1000000007;
	} 
	printf("%lld\n", ans);
	return 0;
}  
