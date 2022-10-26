#include <stdio.h>
int main()
{
	char c;
	int flag=0; //false
	while ((c=getchar())!=EOF){
		if ((c=='"')&&(flag==0)){
			printf("``");
			flag = !flag;
		}else if ((c=='"')&&(flag==1)){
			printf("''");
			flag = !flag;
		}else printf("%c",c);
	}
}
