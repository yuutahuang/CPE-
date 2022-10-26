///UVA10101 Bangla Numbers
#include <iostream>
#include <iomanip>
using namespace std;
void bangla(long long n)
{
    if (n>= 10000000){
        bangla(n/10000000);
        cout << " kuti";
        n%=10000000;
    }
    if (n>= 100000){
        bangla(n/100000);
        cout << " lakh";
        n%=100000;
    }
    if (n>= 1000){
        bangla(n/1000);
        cout << " hajar";
        n%=1000;
    }
    if (n>= 100){
        bangla(n/100);
        cout << " shata";
        n%=100;
    }
    if (n!=0)cout << " " << n;
}

int main()
{
    long long n;
    int count=1;
    while(cin>>n){ ///setw用於控制輸出之間的間隔
        cout << setw(4) << count << ".";
        bangla(n);
        if (n==0) cout << " 0";
        count++;
        cout << endl;
    }
}
