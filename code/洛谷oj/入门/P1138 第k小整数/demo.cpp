#include <bits/stdc++.h>
using namespace std;

bool flag[10001] = {0};
int num[10001];
int size;

int main(){
	int n, k;
	cin >> n >> k;
	size = 0;
	for(int i = 1; i <= n; i++){
		int tmp;
		cin >> tmp;
		if(flag[tmp] == false){
			num[size++] = tmp;
			flag[tmp] = true;
		}
	}
	sort(num+1, num+size+1);
	if(k > size)	printf("NO RESULT\n");
	else	printf("%d\n", num[k]);
	return 0;
}
