#include<stdio.h>
#include<algorithm>
using namespace std;
struct E {
	int w;	//初始权重
	int d;  //序号 
	int c;  //类别 
	int id; //编号 
	bool operator < (const E &A) const{
		if(w == A.w)	return id < A.id;
		return w > A.w;
	} 
}p[20005];
int E[11];

int main(){
//	freopen("in.txt", "r", stdin);
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= 10; i++)	scanf("%d", &E[i]);
	for(int i = 1; i <= n; i++){
		scanf("%d", &p[i].w);
		p[i].id = i;
	} 
	sort(p+1, p+n+1);
	for(int i = 1; i <= n; i++){
		p[i].d = i;
		p[i].c = (i-1) % 10 + 1;
		p[i].w += E[p[i].c];
	}
	sort(p+1, p+n+1);
	for(int i = 1; i <= k; i++){
		if(i != 1)	printf(" ");
		printf("%d", p[i].id);
	}
	return 0;
}

