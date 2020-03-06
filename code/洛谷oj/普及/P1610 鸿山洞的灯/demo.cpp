#include <stdio.h>
#include <algorithm>
using namespace std;
int light[100001];

int main(){
	int n, dist, ans = 0;
	scanf("%d%d", &n, &dist);
	for(int i = 0; i < n; i++){
		scanf("%d", &light[i]);
	}
	sort(light, light+n);
	for(int i = 1; i < n-1; i++){
		if(light[i-1] != 0 && light[i+1] - light[i-1] <= dist){
			light[i] = 0;
			ans++;
		}else{
			int j = i-1;
			while(list[j] == 0)	j--;
			if(light[i+1] - light[j] <= dist){
				light[i] = 0;
				ans++;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
