#include <stdio.h>
#include <string.h>
char pic[6][1005];

void init(){
	for(int i = 1; i < 6; i++){
		for(int j = 1; j < 1005; j++){
			pic[i][j] = '.';
		}
	}
}

void F(char x, int n){
	int tmp = 4*n-1;
	for(int i = 1; i <= 5; i++){
		for(int j  = tmp-2; j <= tmp+2; j++){
			if(i+j == tmp+1 || i+j == tmp+5 || j-i == tmp-1 || j-i == tmp-5)	pic[i][j] = '#';
		} 
	}
	pic[3][tmp] = x;
}
void F_3(char x, int n){
	int tmp = 4*n-1;
	for(int i = 1; i <= 5; i++){
		for(int j  = tmp-2; j <= tmp+2; j++){
			if(i+j == tmp+1 || i+j == tmp+5 || j-i == tmp-1 || j-i == tmp-5)	pic[i][j] = '*';
		} 
	}
	pic[3][tmp] = x;
}

int main(){
	init();
	char word[1000];
	scanf("%s", word);
	int len = strlen(word);
	for(int i = 0; i < len; i++){
		if((i+1) % 3 != 0)	F(word[i],i+1);
	}
	for(int i = 0; i < len; i++){
		if((i+1) % 3 == 0)	F_3(word[i],i+1);
	}
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 4*len+1; j++){
			printf("%c", pic[i][j]);
		}
		printf("\n");
	}
	return 0;
}
