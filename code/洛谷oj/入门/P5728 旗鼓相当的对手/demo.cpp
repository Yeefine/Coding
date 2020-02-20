#include <bits/stdc++.h>
using namespace std;

struct stu{
	int a;
	int b;
	int c;
	
	int sum(){
		return a+b+c;
	}
	
	bool comp(stu A){
		if(abs(a-A.a) <= 5 && abs(b-A.b) <= 5 && abs(c-A.c) <= 5)	return true;
		return false;
	}
	bool operator < (const stu &A) const {
		return (a + b + c) < (A.a + A.b + A.c);
	}
}num[1001]; 

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d%d%d", &num[i].a, &num[i].b, &num[i].c);
	}
	sort(num + 1, num + 1 + n);
	int cnt = 0;
	for(int i = 1; i < n; i++){
		int tmp = i+1;
		while(abs(num[i].sum() - num[tmp].sum()) <= 10 && tmp <= n){
			if(num[i].comp(num[tmp]) == true)	cnt++;
			tmp++;
		}	
	}
	printf("%d\n", cnt);
	return 0;
}
