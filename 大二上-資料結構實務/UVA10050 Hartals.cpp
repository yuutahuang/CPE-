#include <stdio.h>
int main()
{
	int n; /// number of case
	scanf("%d", &n);
	while (n--){
		int m; /// number of day
		scanf("%d", &m);
		int dd[m];
		for (int i=0; i<m; i++) dd[i]=0; ///initialize dd[m]
		int k; ///number of parties
		scanf("%d", &k);
		while (k--){
			int j;
			scanf("%d", &j); ///hartals
			for (int i=1; i<=m; i++){
				if (i%j==0) dd[i-1]++;
			}
		}
		int sum=0;
		for (int i=0; i<m; i++){
			if ((i%7!=5)&&(i%7!=6)){
				if (dd[i]>0) sum++;
			}
		}
		printf("%d\n", sum);
	}
}
