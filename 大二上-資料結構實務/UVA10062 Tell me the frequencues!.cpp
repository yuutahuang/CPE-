#include <stdio.h>
#include <string.h>
char line[1001];
int main()
{
	int test=1;
	while (gets(line)){
		if (test>1) printf("\n");
		int count[128]={0};
		int len=strlen(line);

		for (int i=0; i<len; i++) count[line[i]]++;

		for (int i=1; i<=len; i++){
			for (int j=127; j>=32; j--){
				if (count[j]==i) printf("%d %d\n", j, i);
			}
		}
		test++;
	}
}
