#include <stdio.h>
char str[101];

int main(){
	int n, cnt = 0, flag = 0;
	scanf("%d", &n);
	scanf("%s", str);
	for(int i = 0; i < n-1; i++){
		if(str[i] == 'V' && str[i+1] == 'K'){
			cnt++;
		}else if(str[i] == 'V' && str[i+1] != 'K' && str[i+1] != 'V'){
			str[i+1] = 'K';
			flag = 1;
		}
	}
	printf("%d\n", cnt+flag);
	return 0;
}

