#include <bits/stdc++.h>
using namespace std;

int main(){
	double t;
	int n;
	scanf("%lf%d", &t, &n);
	double tmp = t / n; 
	printf("%.3lf\n%d\n", tmp, 2*n);
	return 0;
}
