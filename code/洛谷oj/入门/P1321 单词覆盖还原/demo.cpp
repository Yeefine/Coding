#include <bits/stdc++.h>
using namespace std;

int main(){
	int boy = 0, girl = 0;
	string str;
	cin >> str;
	int len = str.size();
	for(int i = 0; i < len; i++){
		if(i == 0){
			if(str[i] == 'b' || str[i] == 'o' || str[i] == 'y')	boy++;
			else if(str[i] == 'g' || str[i] == 'i' || str[i] == 'r' || str[i] == 'l')	girl++;
			continue;
		}
		if(str[i] == 'b')	boy++;
		else if(str[i] == 'o' && str[i-1] != 'b')	boy++;
		else if(str[i] == 'y' && str[i-1] != 'o')	boy++;
		
		if(str[i] == 'g')	girl++;
		else if(str[i] == 'i' && str[i-1] != 'g')	girl++;
		else if(str[i] == 'r' && str[i-1] != 'i')	girl++;
		else if(str[i] == 'l' && str[i-1] != 'r')	girl++;
	}
	printf("%d\n%d\n", boy, girl);
	return 0;
}
