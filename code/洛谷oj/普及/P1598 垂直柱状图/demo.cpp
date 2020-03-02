#include <bits/stdc++.h>
using namespace std;

int word[27] = {0};
int maxn = 0;
char pic[500][27];
void init(){
	for(int i = 0; i < 26; i++){
		pic[0][i] = i +'A';
	}
}

int main(){
	init();
	char str[101];
	for(int i = 0; i < 4; i++){
		gets(str);
		int len = strlen(str);
		for(int j = 0; j < len; j++){
			if(str[j] >= 'A' && str[j] <= 'Z'){
				word[str[j] - 'A']++;
				if(word[str[j] - 'A'] > maxn)	maxn = word[str[j] - 'A'];
			}
		}
	}
	for(int i = 1; i<= maxn; i++){
		for(int j = 0; j < 26; j++){
			if(word[j] >= i)	pic[i][j] = '*';
			else pic[i][j] = ' '; 
		}
	}
	for(int i = maxn; i >= 0; i--){
		for(int j = 0; j < 26; j++){
			if(j != 0)	printf(" ");
			printf("%c", pic[i][j]);
		} 
		if(i == 0)	break;
		printf("\n");
	}
	return 0;
}
