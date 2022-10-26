#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int x;
	char num[200];
	while (scanf("%d\n",&x)!=EOF){
		fgets(num, 200, stdin);
		int len=0;
		int a[50]={0};
		char *token = strtok(num, " ");
		while (token != NULL){
			a[len]=atoi(token);
			token = strtok(NULL, " ");
			len++;
		}
		int v=0;
		int n=len-1;
		for (int i=0; i<len; i++){
			v = v + a[i]*(n-i)*pow(x, n-1-i);
		}
		printf("%d\n",v);
	}
}
