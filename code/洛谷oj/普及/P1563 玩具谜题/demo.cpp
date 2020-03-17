#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
struct E{
	string prof;
	int dir;  //0为向内，1为向外 
}men[100005];
int m, n, a, s, now = 0;
int Shun(int i, int step){
	return (i+step)%n;
}
int Ni(int i, int step){
	return (i-step+n)%n;
}

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++)	cin >> men[i].dir >> men[i].prof;
	for(int i = 0; i < m; i++){
		cin >> a >> s;
		if(men[now].dir == 0 && a == 0)	now = Ni(now, s);
		else if(men[now].dir == 1 && a == 0)	now = Shun(now, s);
		else if(men[now].dir == 0 && a == 1)	now = Shun(now, s);
		else if(men[now].dir == 1 && a == 1)	now = Ni(now, s);
	}
	cout << men[now].prof << endl;
	return 0;
}
