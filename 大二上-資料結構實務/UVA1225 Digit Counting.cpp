///UVA1225 Digit Counting
#include <stdio.h>
int main()
{
    int t, n, num, a;
    int count[10];
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        for (int j=0; j<=9; j++){
            count[j]=0;
        }
        scanf("%d",&n);
        for (int i=1; i<=n; i++){
            num=i;
            while (num!=0){
                a = num%10;
                num /= 10;
                count[a]++;
            }
        }
        printf("%d",count[0]);
        for (int i=1; i<=9; i++) printf(" %d",count[i]);
        printf("\n");
    }
}
