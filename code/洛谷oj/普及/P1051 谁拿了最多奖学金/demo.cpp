#include<bits/stdc++.h>
using namespace std;

struct E {
	string name;
	int score;
	int class_score;
	char isGanbu;
	char isWest;
	int papers;
	int id;
	int awards;
}stu[105];

bool cmp(E A, E B){
	if(A.awards == B.awards)	return A.id < B.id;
	else return A.awards > B.awards;
}


int main(){
	freopen("P1051_2.in", "r", stdin); 
	int n, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> stu[i].name >> stu[i].score >> stu[i].class_score >> stu[i].isGanbu >> stu[i].isWest >> stu[i].papers;
		stu[i].id = i;
		stu[i].awards = 0;
		if(stu[i].score > 80 && stu[i].papers >= 1)	stu[i].awards += 8000;
		if(stu[i].score > 85 && stu[i].class_score > 80)	stu[i].awards += 4000;
		if(stu[i].score > 90)	stu[i].awards += 2000;
		if(stu[i].score > 85 && stu[i].isWest == 'Y')	stu[i].awards += 1000;
		if(stu[i].class_score > 80 && stu[i].isGanbu == 'Y')	stu[i].awards += 850;
		sum += stu[i].awards;
	}
	sort(stu, stu+n, cmp);
	cout << stu[0].name << endl;
	cout << stu[0].awards << endl;
	cout << sum << endl;
	return 0;
}
