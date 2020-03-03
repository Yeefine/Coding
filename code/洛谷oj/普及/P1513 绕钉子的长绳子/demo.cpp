#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
#define PI 3.14159265358
struct E {
	double x;
	double y;
}Point[101];

double dis(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

int main(){
	int n, r;
	double ans = 0;
	scanf("%d%d", &n, &r);
	for(int i = 0; i < n; i++){
		scanf("%lf%lf", &Point[i].x, &Point[i].y);
		if(i == 0){
			continue;
		}if(i == n-1){
			ans += dis(Point[i].x, Point[i].y, Point[0].x, Point[0].y);
		}
		ans += dis(Point[i].x, Point[i].y, Point[i-1].x, Point[i-1].y);
	}
	ans += PI * r * 2;
	printf("%.2lf", ans);
	return 0;
}
