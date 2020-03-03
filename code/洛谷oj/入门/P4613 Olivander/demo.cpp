#include <stdio.h>
#include <algorithm>
using namespace std;

int X[101];
int Y[101];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)	scanf("%d", &X[i]);
	sort(X, X+n);
	for(int i = 0; i < n; i++)	scanf("%d", &Y[i]);
	sort(Y, Y+n);
	for(int i = 0; i < n; i++){
		if(X[i] <= Y[i])	continue;
		puts("NE");
		return 0;
	}
	puts("DA");
	return 0;
}
