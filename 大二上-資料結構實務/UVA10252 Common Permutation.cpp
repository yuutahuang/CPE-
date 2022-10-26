#include <stdio.h>
#include <string.h>
int main()
{
	char a[1001]={0}, b[1001]={0};
	int min=0;
	while (gets(a) && gets(b)){
		int tableA[26]={0}, tableB[26]={0};
		int lenA=strlen(a), lenB=strlen(b);

		for (int i=0; i<lenA; i++) tableA[a[i]-97]++;
		for (int i=0; i<lenB; i++) tableB[b[i]-97]++;

		for (int i=0; i<26; i++){
			if (tableA[i] && tableB[i]){
				if (tableA[i] <= tableB[i]){
					min=tableA[i];
				}else min=tableB[i];
				for (int j=0; j<min; j++) printf("%c", i+97);
			}
		}printf("\n");
	}

}
