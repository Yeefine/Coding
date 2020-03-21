#include <bits/stdc++.h>

using namespace std;
struct E {
	int s;
	int w;
	int id;
	bool operator < (const E &A) const {
		if(s == A.s)	return id < A.id;
		return s > A.s;
	}
};
E A[100005];
E B[100005];
E P[200005];
int n, r, q;
void merge_sort(){
	int i = 1, j = 1, k = 1;
	while(i <= n && j <= n){
		if(A[i].s > B[j].s || (A[i].s == B[j].s && A[i].id < B[j].id)){
			P[k].s = A[i].s;
			P[k].w = A[i].w;
			P[k++].id = A[i++].id;
		}else{
			P[k].s = B[j].s;
			P[k].w = B[j].w;
			P[k++].id = B[j++].id;
		}
	}
	while(i <= n){
		P[k].s = A[i].s;
		P[k].w = A[i].w;
		P[k++].id = A[i++].id;
	}
	while(j <= n){
		P[k].s = B[j].s;
		P[k].w = B[j].w;
		P[k++].id = B[j++].id;
	}
}
int main(){
	cin >> n >> r >> q;
	for(int i = 1; i <= 2*n; i++){
		cin >> P[i].s;
		P[i].id = i;
	} 
	for(int i = 1; i <= 2*n; i++)	cin >> P[i].w;
	sort(P+1, P+2*n+1);
	while(r--){
		int tmp = 1;
		for(int i = 1; i < 2*n; i+=2){
			if(P[i].w > P[i+1].w){
				A[tmp].s = P[i].s + 1;
				A[tmp].id = P[i].id;
				A[tmp].w = P[i].w;
				B[tmp].s = P[i+1].s;
				B[tmp].id = P[i+1].id;
				B[tmp].w = P[i+1].w;
				tmp++;
			}else{
				A[tmp].s = P[i+1].s + 1;
				A[tmp].id = P[i+1].id;
				A[tmp].w = P[i+1].w;
				B[tmp].s = P[i].s;
				B[tmp].id = P[i].id;
				B[tmp].w = P[i].w;
				tmp++;
			}		
		}
		merge_sort();
	}
	cout << P[q].id << endl;
	return 0;
}
