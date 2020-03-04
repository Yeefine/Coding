#include <stdio.h>
#include <math.h>
#define PI 3.1415926 
int main(){
	double v, m, x, y;
	scanf("%lf%lf", &v, &m);
	double v1 = v * sin(m);
	double v2 = v * cos(m);
	double t = (double)v2 / 10.0;
	x = v1 * t;
	y = 0.5 * 10.0 * t * t;
	printf("%lf %lf\n", x, y);
	return 0;
}
