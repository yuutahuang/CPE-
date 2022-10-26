#include <stdio.h>
int main()
{
	int a[500];
	int n;
	while (scanf("%d",&n)!=EOF){
		if (n==0) break;
		int parity=0, count=0;
		printf("The parity of ");
		while (n!=0){
			a[count]=n%2;
			if (a[count]==1) parity++;
			n/=2;
			count++;
		}
		while (count--) printf("%d", a[count]);
		printf(" is %d (mod 2).\n",parity);
	}
}
