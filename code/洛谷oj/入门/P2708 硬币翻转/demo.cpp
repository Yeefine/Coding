#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
string coin;
int size, now;
int main(){
	cin >> coin;
	size = coin.size();
	now = 1;
	for(int i = 1; i < size; i++){
		if(coin[i] == coin[i-1])	continue;
		coin[now++] = coin[i];
	} 
	if(coin[now-1] == '1')	cout << now-1 << endl;
	else cout << now << endl;
	return 0;
}
