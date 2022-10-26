#include <stdio.h>
int main()
{
    long long s, d;
    while (scanf("%lld %lld",&s, &d)!=EOF){
        long long num = s;
        while (num<d){
            s++;
            num += s;
        }
        printf("%lld\n", s);
    }
}
