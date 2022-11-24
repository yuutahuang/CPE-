#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000001][32];
int cmp(const void *a, const void *b)
{
	return strcmp((char*)a, (char*)b);
}
int main()
{
	int n, key=0;
	scanf("%d", &n);
	gets(tree[0]);
	gets(tree[0]);
	while (n--){
		if (key!=0) printf("\n");
		key++;
		int i=0;
		float ans=0;
		while (gets(tree[i])!=NULL){
			if (strcmp(tree[i],"")==0) break;
			i++;
		}
		qsort (tree, i, 32, cmp);
		int k=0;
		for (int j=0; j<i; j++){
			if (strcmp(tree[j], tree[k])!=0){
				ans = (j-k)*(float)100/i;
				printf("%s %.4f\n", tree[k], ans);
				k=j;
			}
			if (j==i-1){
				ans = (j-k+1)*(float)100/i;
				printf("%s %.4f\n", tree[j], ans);
			}
		}
	}
}
