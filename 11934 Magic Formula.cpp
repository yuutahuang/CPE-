/// 2023.5.23, 11934 Magic Formula
/// f(x) = ax^2 + bx + c
/// max = L, divisible by d

#include <stdio.h>
int main()
{
    int a, b, c, d, L;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &L);
    while (a!=0 || b!= 0|| c!=0 || d!=0 || L!=0){ // �u�n������0�N����
            int count=0; // �C���p��e�����k0
        for (int i=0; i<=L; i++){
            if ((a*i*i + b*i + c)%d==0) count++; // �i�H�㰣�N++
        }
        printf("%d\n", count);
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &L);
    }
}
