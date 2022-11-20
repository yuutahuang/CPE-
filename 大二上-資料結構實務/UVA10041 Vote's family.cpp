#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int t, n, a[500], mid;
    scanf("%d",&t);
    for (int i=0; i<t; i++){
        scanf("%d", &n);
        for (int j=0; j<n; j++){
            scanf("%d", &a[j]);
        }
        qsort(a, n, sizeof(int), cmp);
        mid = a[n/2];
        int sum=0;
        for (int k=0; k<n; k++) sum+=abs(a[k]-mid);
        printf("%d\n",sum);
    }
}
