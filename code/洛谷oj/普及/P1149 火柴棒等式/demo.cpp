#include <stdio.h>
int num[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int a[2001] = {6};  //a[0]为6，其他为0 
int main(){
	for(int i = 1; i <= 2000; i++){
		int j = i;
		while(j != 0){
			a[i] += num[j%10];
			j /= 10;
		}
	}
	int n, cnt = 0; 
	scanf("%d", &n);
	n -= 4;
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= 1000; j++){
			if(a[i] + a[j] + a[i+j] == n)	cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
