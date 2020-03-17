#include <bits/stdc++.h>
using namespace std;
int a[10005], b[10005];
int lx, ly, rx, ry, p, py, n, x;
double Min = -233333333.0, Max = 233333333.0;
int main(){
	scanf("%d", &p);
	n = 1;
	scanf("%d%d", &a[1], &b[1]);
	while(1){
		scanf("%d%d", &rx, &ry);
		if(rx == -1 && ry == -1)	break;
		lx = a[n], ly = b[n];
		for(int i = lx+1; i <= rx; i++){
			n++;
			a[n] = a[n-1] + 1;
			b[n] = b[n-1] + (ry - ly) / (rx - lx);
		}
	}
	scanf("%d", &x);
	if(p >=  a[n]){
		lx = a[n], ly = b[n];
		for(int i = lx+1; i <= p+1; i++){
			n++;
			a[n] = a[n-1] + 1;
			b[n] = b[n-1] - x;
		}
	}
	for(int i = 1; i <= n; i++){
		if(a[i] == p){
			py = b[i];
			break;
		}
	}
	for(int i = 1; i <= n; i++){
		if(py - b[i] > 0){
			Min = max(Min, (double)(((double)(a[i]-a[1])*b[i] - (double)(p-a[1])*py) / (double)(py-b[i])));
		}else{
			Max = min(Max, (double)(((double)(a[i]-a[1])*b[i] - (double)(p-a[1])*py) / (double)(py-b[i])));
		}
	}
	if(Min > Max)	puts("NO SOLUTION");
	else if(Min > 0)	printf("%.0lf", ceil(Min));
	else if(Max < 0)	printf("%.0lf", floor(Max));
	else printf("0");
	return 0;
}
