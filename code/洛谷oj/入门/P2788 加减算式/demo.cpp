#include <bits/stdc++.h>
using namespace std;

int main(){
	char str[60001];
	long long ans = 0, cnt = 0;
	int k = 1;
	scanf("%s", str);
	int len = strlen(str);
	for(int i = 0; i < len; i++){
		if(str[i] >= '0' && str[i] <= '9'){
			cnt = cnt * 10 + str[i] - '0';
		}else if(str[i] == '+'){
			if(k == 1)	ans += cnt;
			else ans-= cnt;
			cnt = 0;
			k = 1;
		}else if(str[i] == '-'){
			if(k == 1)	ans += cnt;
			else ans-= cnt;
			cnt = 0;
			k = 0;
		}
	}
	if(k == 1)	ans += cnt;
	else ans-= cnt;
	printf("%lld\n", ans);
	return 0;
}

/*  ´óÀÐ½â·¨ 
int ans, t;
int main(){
	while(cin >> t)	ans += t;
	cout << ans;
	return 0;
} 
*/ 
