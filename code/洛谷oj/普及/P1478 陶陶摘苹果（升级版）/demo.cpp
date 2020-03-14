#include <stdio.h>
#include <algorithm>
using namespace std; 
struct E{
	int x;
	int y;
	bool flag;
	bool operator < (const E &A) const {
		return y < A.y;
	}
}apples[5005];

int main(){
	int n, s, a, b, cnt = 0;
	scanf("%d%d", &n, &s);
	scanf("%d%d", &a, &b);
	a += b;
	for(int i = 0; i < n; i++){
		scanf("%d%d", &apples[i].x, &apples[i].y);
		apples[i].flag = false;
	}
	sort(apples, apples+n);
	for(int i = 0; i < n; i++){
		if(apples[i].y <= s && apples[i].x <= a){
			s -= apples[i].y;
			apples[i].flag = true;
			cnt++;	
		}else if(apples[i].y > s)	break;
	}
	printf("%d\n", cnt);
	return 0;
}
