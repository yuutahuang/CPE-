///UVA11461 Square Numbers
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, m, sq;
    while (cin >> n >> m){
        if (n==0 && m==0) break;
        int count=0;
        for (int i=n; i<=m; i++){
            int sq=sqrt(i);
            if(sq*sq == i) count++;
        }
        cout << count << endl;
    }
}
