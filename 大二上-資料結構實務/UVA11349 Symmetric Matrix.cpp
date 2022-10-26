#include <stdio.h>
long long a[10000];
int main()
{
    int t, n;
    scanf("%d",&t); //測資數量
    for (int i=0;i<t;i++){
        scanf(" N = %d",&n); //矩陣大小
        for (int j=0; j<n*n; j++) scanf("%lld",&a[j]); //輸入元素
        int i=0, j=n*n-1;
        while (i<=j){
            if(a[i] != a[j]) break; //對稱元素不相等
            if (a[i]<0) break; //元素為負數
            i++, j--; //對稱元素相同，繼續比較
        }
        if (i>j) printf("Test #%d: Symmetric.\n",t);
        else printf("Test #%d: Non-symmetric.\n",t);
    }
}
