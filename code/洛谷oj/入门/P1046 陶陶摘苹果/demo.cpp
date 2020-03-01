#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int height[10];
	for(int i = 0; i < 10; i++)	scanf("%d", &height[i]);
	sort(height, height+10);
	int h, ans = 0;
	scanf("%d", &h);
	h += 30;
	for(int i = 0; i < 10; i++){
		if(height[i] > h)	break;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
