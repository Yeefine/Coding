#include <stdio.h>
#define L 10005 
int tree[L] = {0};

int main(){
	int l, m, a, b;
	scanf("%d%d", &l, &m);
	l += 1;
	while(m--){
		scanf("%d%d", &a, &b);
		for(int i = a; i <= b; i++){
			if(tree[i] == 0){
				tree[i] = 1;
				l--;
			}
		}
	}
	printf("%d\n", l);
	return 0;
}


