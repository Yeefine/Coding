#include <stdio.h>
int buf[21][21][21];

int f(long long a, long long b, long long c){
	if(a <= 0 || b <= 0 || c <= 0)	return 1;
	else if(a > 20 || b > 20 || c > 20){
		if(buf[20][20][20] != 0)	return buf[20][20][20];
		else return f(20, 20, 20); 
	}else if(buf[a][b][c] != 0)	return buf[a][b][c];
	else if(a < b && b < c){
		buf[a][b][c] = f(a, b, c-1) + f(a, b-1, c-1) - f(a, b-1, c);
		return f(a, b, c-1) + f(a, b-1, c-1) - f(a, b-1, c);
	}else{
		buf[a][b][c] = f(a-1, b, c) + f(a-1, b-1, c) + f(a-1, b, c-1) - f(a-1, b-1, c-1);
		return f(a-1, b, c) + f(a-1, b-1, c) + f(a-1, b, c-1) - f(a-1, b-1, c-1);
	}
}
void init(){
	for(int i = 0; i < 21; i++){
		for(int j = 0; j < 21; j++){
			for(int k = 0; k < 21; k++)	buf[i][j][k] = 0;
		}
	}
}

int main(){
	long long a, b, c;
	while(scanf("%lld%lld%lld", &a, &b, &c) != EOF){
		if(a == -1 && b == -1 && c == -1)	break;
		int tmp = f(a, b, c);
		printf("w(%d, %d, %d) = %d\n", a, b, c, tmp);
	}
	return 0;
}
