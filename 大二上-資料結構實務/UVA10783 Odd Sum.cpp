///UVA10783 Odd Sum
#include <stdio.h>
int main()
{
	int a,b,n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		scanf("%d %d", &a,&b);
		int sum=0;
		for (int j=a; j<=b; j++){
			if (j%2>0) sum += j;
		}
		printf("Case %d: %d\n",i,sum);
	}
}
