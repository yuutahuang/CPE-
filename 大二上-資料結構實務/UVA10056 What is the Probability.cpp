#include <stdio.h>
#include <math.h>
int main()
{
	int t, N, i;
	double p, q, a, r;
	scanf("%d",&t);
	for (int j=0; j<t; j++){
		scanf("%d %lf %d", &N, &p, &i);

		q=1-p;
		a=pow(q, i-1)*p;
		r=pow(q, N);
		if (p==0) printf("0.0000\n");
		else printf("%.4lf\n", (a*(1-pow(r, 100000))/(1-r)));
	}
}
