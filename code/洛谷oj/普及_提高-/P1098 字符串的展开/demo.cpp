#include <bits/stdc++.h>
using namespace std;
int main(){
	string str, tmp;
	int p1, p2, p3, a, b, flag, x = 0;
	char c;
	cin >> p1 >> p2 >> p3;
	cin >> str;
	while(str.find("-", x) != string::npos){
		flag = 0;
		tmp = "";
		a = str.find("-", x);
		if(str[a+1] == str[a-1] + 1){
			str.erase(a, 1);
			x = a;
			continue;
		}	
		else if(str[a+1] <= str[a-1]){
			x = a+1;
			continue;
		}	
		if(p3 == 1 && p1 == 1){
			if((str[a-1] >= 'a' && str[a+1] <= 'z') || (str[a-1] >= '0' && str[a+1] <= '9')){
				flag = 1;
				c = str[a-1]+1;
				while(c < str[a+1]){
					for(int i = 0; i < p2; i++)	tmp += c;
					c++;
				}
			}
			
		}else if(p3 == 1 && p1 == 2){
			c = str[a-1];
			if(str[a-1] >= 'a' && str[a+1] <= 'z'){
				flag = 1;
				c= str[a-1] - 'a' + 'A' + 1;
				while(c < str[a+1] - 'a' + 'A'){
					for(int i = 0; i < p2; i++)	tmp += c;
					c++;
				}
			}else if(str[a-1] >= '0' && str[a+1] <= '9'){
				flag = 1;
				c = str[a-1]+1;
				while(c < str[a+1]){
					for(int i = 0; i < p2; i++)	tmp += c;
					c++;
				}
			}
			
		}else if(p3 == 2 && p1 == 1){
			if((str[a-1] >= 'a' && str[a+1] <= 'z') || (str[a-1] >= '0' && str[a+1] <= '9')){
				flag = 1;
				c = str[a+1] - 1;
				while(c > str[a-1]){
					for(int i = 0; i < p2; i++)	tmp += c;
					c--;
				}
			}
		}else if(p3 == 2 && p1 == 2){
			c = str[a+1];
			if(str[a-1] >= 'a' && str[a+1] <= 'z'){
				flag = 1;
				c= str[a+1] - 'a' + 'A' - 1;
				while(c > str[a-1] - 'a' + 'A'){
					for(int i = 0; i < p2; i++)	tmp += c;
					c--;
				}
			}else if(str[a-1] >= '0' && str[a+1] <= '9'){
				flag = 1;
				c = str[a+1]-1;
				while(c > str[a-1]){
					for(int i = 0; i < p2; i++)	tmp += c;
					c--;
				}
			}
		}else if(p1 == 3){
			if((str[a-1] >= 'a' && str[a+1] <= 'z') || (str[a-1] >= '0' && str[a+1] <= '9')){
				flag = 1;
				c = str[a-1]+1;
				while(c < str[a+1]){
					for(int i = 0; i < p2; i++)	tmp += '*';
					c++;
				}
			}
		}
		if(flag == 1){
			str.erase(a, 1);
			str.insert(a, tmp);	
			x = a + tmp.size();
		}else{
			x = a + 1;
		}
		
	}
	cout << str << endl;
	return 0;
}
