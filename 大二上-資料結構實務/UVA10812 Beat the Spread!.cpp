///UVA10812 Beat the Spread!
#include <stdio.h>
int main()
{
	int a,b,n;
	scanf("%d\n",&n);
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(a<b || (a+b)%2!=0 || (a-b)%2!=0)printf("impossible\n");
		else printf("%d %d\n",(a+b)/2,(a-b)/2);
	}


}
