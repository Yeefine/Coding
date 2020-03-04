#include <stdio.h>
#include <math.h>
const int N=5001, K=1000001;

int S[N];
int num[K] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &S[i]);
	}
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			int q = abs(S[i] - S[j]);
			num[q] = 1;
		}
	}
	for(int i = n; i < K; i++){
		if(num[i] != 1){
			int f = 1;
			for(int j = i; j < K; j+=i){
				if(num[j] == 1){
					f = 0;
					break;
				}
			}
			if(f == 1){
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}
