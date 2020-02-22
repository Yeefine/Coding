#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	double ans = (pow((1+sqrt(5))/2, n) - pow((1-sqrt(5))/2, n))/sqrt(5);
	printf("%.2lf\n", ans);
	return 0;
}

