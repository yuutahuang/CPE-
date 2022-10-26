///UVA100 The 3n+1 problem
#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		printf("%d %d ",a,b);
		if(a>b){
			int temp=a;
			a=b;
			b=temp;
		}
		int max=0;
		for(int i=a;i<=b;i++){
			int X=1;
			int n=i;
			while(n!=1){
				if(n%2==1){
					n=n*3+1;
					X++;
				}
				else{
					n=n/2;
					X++;
				}
			}
			if(max<X) max=X;
		}
		printf("%d\n",max);
	}
}
