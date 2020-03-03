#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
#define Pi 3.1415926535
struct  E{
	int x;
	int y;
}buf[1005];

int dis(int x1, int y1, int x2, int y2){
	return pow(x1 - x2, 2) + pow(y1 - y2, 2);
}

int main(){
	int n, maxn = 0, ans = (1 << 30);
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &buf[i].x, &buf[i].y);
	}
	for(int i = 0; i < n; i++){
		int now = 0;
		for(int j = 0; j < n; j++){
			if(i == j)	continue;
			now = max(now, dis(buf[i].x, buf[i].y, buf[j].x, buf[j].y));
		}
		ans = min(ans, now);
	}
	printf("%.4lf", (double)ans*Pi);
	return 0;
}
