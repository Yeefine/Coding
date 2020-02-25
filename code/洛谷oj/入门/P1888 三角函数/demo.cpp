#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
	if(b == 0)	return a;
	else return lcm(b, a % b);
}

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a < b)	swap(a, b);
	if(b < c)	swap(b, c);
	if(a < b)	swap(a, b);
	int tmp = lcm(a, b);
	a = a / tmp;
	b = b / tmp;
	printf("%d/%d\n", b, a);
	return 0;
}
