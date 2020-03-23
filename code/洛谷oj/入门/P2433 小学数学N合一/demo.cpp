#include<bits/stdc++.h>
#include<iomanip>
#define PI 3.141593
using namespace std;

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << 14/4 << endl << 14-14%4 << endl << 14 %4 << endl;
    } else if (T == 4) {
        cout << fixed << setprecision(3) << 1.0*500/3 << endl;
    } else if (T == 5) {
        cout << (260+220)/(20+12) << endl;
    } else if (T == 6) {
     	cout << sqrt(6*6+9*9) << endl;
    } else if (T == 7) {
     	cout << 100+10 << endl << 100+10-20 << endl << 0 << endl;
    } else if (T == 8) {
    	cout << 2*PI*5 << endl << PI*5*5 << endl << 1.0*4/3*PI*5*5*5 << endl;
    } else if (T == 9) {
        cout << (((1+1)*2+1)*2+1)*2 << endl;
    } else if (T == 10) {
        cout << 9 << endl;
    } else if (T == 11) {
        cout << 1.0*100 / 3<< endl;
    } else if (T == 12) {
        cout << (int)('M'-'A')+1 << endl << (char)('A'+17) << endl;
    } else if (T == 13) {
        cout << (int)(pow(1.0*4/3*PI*(1000+64), 1.0*1/3)) << endl;
    } else if (T == 14) {
        cout << 50 << endl;
    }
    return 0;
}

