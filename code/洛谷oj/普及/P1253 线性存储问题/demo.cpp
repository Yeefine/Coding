#include <stdio.h>
#include <algorithm>
using namespace std;
struct E{
	int len;
	int hz;
	long long sum; 
	int id;
	bool operator < (const E &A) const {
		if(sum == A.sum)	return len > A.len;
		return sum > A.sum;
	}
}P[10005]; 

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &P[i].len, &P[i].hz);
		P[i].sum = P[i].len * P[i].hz;
		P[i].id = i+1;
	}
	sort(P, P+n);
	for(int i = 0; i < n; i++){
		if(i != 0)	printf(" ");
		printf("%d", P[i].id);
	}
	return 0;
}
