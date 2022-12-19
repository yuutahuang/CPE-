#include <stdio.h>
int main()
{
	double x,y,x1,x2,x3,x4,y1,y2,y3,y4;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF){
		x=x1+x2+x3+x4;
		y=y1+y2+y3+y4;
		if((x1==x3 && y1==y3)||(x1==x4 && y1==y4)){
			x=x-3*x1;
			y=y-3*y1;
		}else{
			x=x-3*x2;
			y=y-3*y2;
		}
		printf("%.3lf %.3lf\n",x,y);
	}
}
