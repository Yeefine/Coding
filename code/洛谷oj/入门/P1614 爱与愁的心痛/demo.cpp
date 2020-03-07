#include <stdio.h>
#include <algorithm>
using namespace std;
int a[3005];

int main(){
	int n, m, sum, minn = 0x7fffffff;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)	scanf("%d", &a[i]);
	for(int i = m-1; i < n; i++){
		sum = 0;
		int k = i;
		while(k >= i-m+1)	sum += a[k--];
		minn = min(minn, sum);
	}
	printf("%d\n", minn);
	return 0;
}
