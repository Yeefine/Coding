#include<stdio.h>
#include <algorithm>
using namespace std;

int num[5];
int ans[5];
char str[5]; 
int main(){
	for(int i = 0; i < 3; i++)	scanf("%d", &num[i]);
	sort(num, num + 3);
	scanf("%s", str);
	for(int i = 0; i < 3; i++){
		ans[i] = num[str[i] - 'A'];
	}
	for(int i = 0; i < 3; i++){
		if(i != 0)	printf(" ");
		printf("%d", ans[i]);
	}
	return 0;
} 
