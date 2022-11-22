#include <stdio.h>
int main()
{
    int t, n, train[51]={0};
    scanf("%d", &t); ///test case
    for (int i=0; i<t; i++){
        scanf("%d", &n); ///length of the train
        ///a permutation of the numbers 1 through 'n'
        for (int j=0; j<n; j++) scanf("%d", &train[j]);

        ///bubble sort
        int swaps=0;
        for (int k=0; k<n-1; k++){
            for (int x=0; x<n-1-k; x++){
                if (train[x]>train[x+1]){
                    int tmp = train[x];
                    train[x] = train[x+1];
                    train[x+1] = tmp;
                    swaps++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }
}
