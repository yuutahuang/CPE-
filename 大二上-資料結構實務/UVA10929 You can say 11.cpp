///UVA10929 You can say 11
#include <stdio.h>
#include <string.h>
int main()
{
	char n[1000];
	while (scanf("%s",n) == 1){
		if (n[0] == '0') break;
		int odd=0, even=0;
		int len=strlen(n);
		for (int i=0;i<len;i++){
			if (i%2==1) odd+=n[i]-48;
			else even+=n[i]-48;
		}
		if ((odd-even)%11==0) printf("%s is a multiple of 11.\n",n);
		else printf("%s is not a multiple of 11.\n",n);

	}
}
