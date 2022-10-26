#include <stdio.h>
int main()
{
	char *wday[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	int mdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	int endday = 7+1-(31+28+31+4)%7;

	int n;
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		int M, D;
		scanf("%d %d",&M, &D);
		int dsum=0;
		for (int j=0; j<M-1;j++) dsum += mdays[j];
		dsum += D;
		printf("%s\n", wday[(dsum%7 + endday)%7]);
	}
}
