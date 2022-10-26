#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,c;
	while (scanf("%d",&n)== 1){
		int a[n], b[n]={0};
		bool ans = 0;
		for (int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		for (int j=1; j<n; j++){
			if (abs(a[j]-a[j-1]) < n) b[abs(a[j]-a[j-1])]++;
		}
		for (int k=1; k<n; k++){
			if (b[k]==0){
				ans = 1;
				break;
			}
		}
		if (ans) printf("Not jolly\n");
		else printf("Jolly\n");
	}
}
