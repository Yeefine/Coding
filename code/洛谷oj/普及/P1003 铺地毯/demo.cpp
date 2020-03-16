#include<stdio.h>
struct E{
	int a;
	int b;
	int g; 
	int k;
	int n;
}buf[10005]; 

int main(){
	int n, a, b, g, k, flag = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d%d%d%d", &buf[i].a, &buf[i].b, &buf[i].g, &buf[i].k);
	}
	int x, y;
	scanf("%d%d", &x, &y);
	for(int i = n; i >= 1; i--){
		if(x >= buf[i].a && x <= buf[i].a + buf[i].g && y >= buf[i].b && y <= buf[i].b + buf[i].k ){
			printf("%d\n", i);
			flag = 1;
			break;
		}
	}
	if(flag == 0)	printf("-1\n");
	return 0;
}
