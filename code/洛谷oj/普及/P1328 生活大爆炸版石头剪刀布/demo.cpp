#include<stdio.h>
int rules[5][5] = {
	{0, -1, 1, 1, -1},
	{1, 0, -1, 1, -1},
	{-1, 1, 0, -1, 1},
	{-1, -1, 1, 0, 1},
	{1, 1, -1, -1, 0}
};
int A[205], B[205];
int main(){
	int n, a, b, x = 0, y = 0, cnt1 = 0, cnt2 = 0;
	scanf("%d%d%d", &n, &a, &b);
	for(int i = 0; i < a; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0; i < b; i++){
		scanf("%d", &B[i]);
	}
	while(n--){
		if(x >= a)	x %= a;
		if(y >= b)	y %= b;
		if(rules[A[x]][B[y]] == 1)	cnt1++;
		else if(rules[A[x]][B[y]] == -1)	cnt2++;
		x++;
		y++;
	}
	printf("%d %d\n", cnt1, cnt2);
	return 0;
}
