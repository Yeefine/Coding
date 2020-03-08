#include <stdio.h>
#include <iostream>
using namespace std;

int a, b, LPmax, LP, EXPmax, exp, g, h, k, x, y, pt;

void op_1(){
	if(exp + g >= EXPmax){
		LP = LP - b + LPmax + h;
		exp = (exp + g) % EXPmax;
		LPmax += h;
		EXPmax += k;
	}else{
		LP -= b;
		exp += g;
	}
	pt += a;
}

void op_2(){
	LP += LPmax;
}

int main(){
	pt = 0;
	int cnt = 0;
	cin >> a >> b >> LPmax >> LP >> EXPmax >> exp >> g >> h >> k >> x >> y;
	LP += x;
	while(pt < y){
		if(LP >= b){
			op_1();
		}else{
			op_2();
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
