#include <bits/stdc++.h>
using namespace std;
int main(){
	int num[3];
	for(int i = 0; i < 3; i++)	scanf("%d", &num[i]);
	sort(num, num + 3);
	for(int i = 0; i < 3; i++){
		if(i != 0)	printf(" ");
		printf("%d", num[i]);
	}
	return 0;
}
