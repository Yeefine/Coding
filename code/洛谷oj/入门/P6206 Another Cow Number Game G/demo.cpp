#include <stdio.h>
int main(){
	long long n, cnt = 0;
	scanf("%lld", &n);
	while(n != 1){
		if(n & 1 == 1){
			n = (n * 3 + 1) / 2;
			cnt += 2;
		} 	
		else{
			n /= 2;
			cnt++;
		}	
	}
	printf("%lld\n", cnt);
	return 0;
}
