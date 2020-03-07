#include <stdio.h>
struct E{
	int red;
	int green;
}list[100005];
int A[100005];

int main(){
	int n, m, now = 0;
	scanf("%d%d", &n, &m);
	A[0] = m;
	for(int i = 1; i <= n-1; i++)	scanf("%d", &A[i]);
	for(int i = 1; i <= n; i++)	scanf("%d", &list[i].red);
	for(int i = 1; i <= n; i++)	scanf("%d", &list[i].green);
	for(int i = 0; i < n; i++){
		now += A[i];
		if(now % (list[i+1].green + list[i+1].red) < list[i+1].green){
			printf("%d\n", now);
		}else{
			int tmp = now % (list[i+1].green + list[i+1].red);
			now += list[i+1].green + list[i+1].red - tmp;
			printf("%d\n", now);
		}
	}
	return 0;
} 
