#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	scanf("%d", &x);
	bool a = !(x & 1);
	bool b = x > 4 && x <= 12;
	printf("%d %d %d %d\n", a & b, a | b, (a && !b || !a && b), !a && !b);
	return 0;
}
