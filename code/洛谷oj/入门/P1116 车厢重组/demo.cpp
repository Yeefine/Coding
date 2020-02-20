#include <stdio.h>
int buf[10001];
int bubblesort(int num[], int n){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < n - i; j++){
			if(num[j] > num[j+1]){
				int tmp = num[j];
				num[j] = num[j+1];
				num[j+1] = tmp;
				cnt++;
			}
		}
	}
	return cnt;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &buf[i]);
	}
	printf("%d\n", bubblesort(buf, n));
	return 0;
}
