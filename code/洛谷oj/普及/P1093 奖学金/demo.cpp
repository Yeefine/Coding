#include<bits/stdc++.h>
using namespace std;
struct E {
	int yw;
	int sx;
	int yy;
	int sum;
	int id;
	bool operator < (const E &A) const {
		if(sum == A.sum){
			if(yw == A.yw){
				return id < A.id;
			}
			return yw > A.yw;
		}
		return sum > A.sum;
	}
}stu[305];
/*
bool cmp(E A, E B){
	if(A.sum == B.sum){
			if(A.yw == B.yw){
				return A.id < B.id;
			}
			return A.yw > B.yw;
		}
		return A.sum > B.sum;
}
*/
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> stu[i].yw >> stu[i].sx >> stu[i].yy;
		stu[i].sum = stu[i].yw + stu[i].sx + stu[i].yy;
		stu[i].id = i;
	}
	sort(stu+1, stu+1+n);
//	sort(stu+1, stu+n+1, cmp);
	for(int i =1; i <= 5; i++)	cout << stu[i].id << " " << stu[i].sum << endl;
	return 0;
}
