#include <stdio.h>
#include<math.h>
#include <algorithm>
using namespace std;
struct E{
	int id;
	int score;
	bool operator < (const E &A) const {
		if(score == A.score)	return id < A.id; 
		return score > A.score;
	}
}stu[5005];

int main(){
	freopen("in.txt", "r", stdin);
	int n, m;
	scanf("%d%d", &n ,&m);
	for(int i = 0; i < n; i++)	scanf("%d%d", &stu[i].id, &stu[i].score);
	m = m * 150 / 100;
	sort(stu, stu + n);
	while(stu[m].score == stu[m-1].score)	m++;
	printf("%d %d\n", stu[m-1].score, m);
	for(int i = 0; i < m; i++)	printf("%d %d\n", stu[i].id, stu[i].score);
	return 0;
} 
