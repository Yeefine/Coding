#include <iostream>
using namespace std;
int stu[2000005] = {0};
int main(){
	int n, m, tmp;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)	cin >> stu[i];
	for(int i = 1; i <= m; i++){
		cin >> tmp;
		cout << stu[tmp] << endl;
	} 
	return 0;
}
