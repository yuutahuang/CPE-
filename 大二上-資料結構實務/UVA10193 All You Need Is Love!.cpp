#include <iostream>
using namespace std;
int main() {
    int N;
    string S1, S2;
    cin >> N;
    for (int Case = 1; Case <= N; Case++){
        cin >> S1 >> S2;
        int n1 = 0, n2 = 0;
        for (int i = 0; i < S1[i]!='\0'; i++){
            n1 *= 2;
            n1 += S1[i] - '0';
        }
        for (int i = 0; S2[i]!='\0'; i++){
            n2 *= 2;
            n2 += S2[i] - '0';
        }
        while (n2>0){
        	int tmp=n1%n2;
        	n1=n2;
        	n2=tmp;
        }
        cout << "Pair #" << Case;
        if (n1 > 1) cout << ": All you need is love!\n";
        else cout << ": Love is not all you need!\n";
    }
}
