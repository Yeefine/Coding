#include <stdio.h>
int Yeap[1500];
bool isYEAP(int year){
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)	return true;
	return false;
}

int main(){
	int x, y, cnt = 0;
	scanf("%d%d", &x, &y);
	for(int i = x; i <= y; i++){
		if(isYEAP(i) == true){
			Yeap[cnt++] = i;
		}
	}
	printf("%d\n", cnt);
	for(int i = 0; i < cnt; i++){
		if(i != 0)	printf(" ");
		printf("%d", Yeap[i]);
	}
	return 0;
}
