#include <stdio.h>
int main()
{
    char num[10001];

    while (scanf("%s", num)!=EOF){
        int max=1;
        int sum=0;
        for (int i=0; num[i]!=0; i++){
            int d=0;
            if (num[i]>='0' && num[i]<='9') d=num[i]-'0';
            if (num[i]>='A' && num[i]<='Z') d=num[i]-'A'+10;
            if (num[i]>='a' && num[i]<='z') d=num[i]-'a'+36;
            sum+=d;
            if(d>max) max=d;
        }
        int R=max+1;
        for (R; R<=62; R++){
            if (sum%(R-1)==0) break;
        }
        if (R<=62) printf("%d\n", R);
        else printf("such number is impossible!\n");
    }

}
