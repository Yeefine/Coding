#include <stdio.h>
int M[1005];
int p[105];
int main(){
	int i, m, n, flag, cnt = 0;
	scanf("%d%d", &m, &n);
	for(int i = 1; i <= n; i++)	scanf("%d", &M[i]);
	for(int i = 0; i < m; i++)	p[i] = -1;
	for(int i = 1; i <= n; i++){
		flag = 1;
		for(int j = 0; j < m; j++){
			if(M[i] == p[j]){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			p[cnt % m] = M[i];
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
