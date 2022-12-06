#include <stdio.h>
int main()
{
    int n, m, ok;
    int a[10000], count;
    while (scanf("%d %d", &n, &m)==2){
        int count=0;
        a[0]=n;
        if (n>m && m>=2) ok=1;
        else ok=0;
        while (ok && n>1){
            if (n%m!=0) ok=0;
            else{
                n/=m;
                count++;
                a[count]=n;
            }
        }
        if (ok){
            for (int i=0; i<count; i++) printf("%d ", a[i]);
            printf("%d\n", a[count]);
        }
        else printf("Boring!\n");
    }
}
