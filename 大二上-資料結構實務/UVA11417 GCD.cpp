///UVA11417 GCD
#include <iostream>
using namespace std;
int GCD(int n, int m)
{
	if (m==0) return n;
	return GCD(m, n%m);
}
int main()
{
	int n;
	while (cin >> n){
		if (n==0) break;
		int G=0;
		for (int i=1; i<n; i++){
			for (int j=i+1; j<=n; j++){
				G+=GCD(i,j);
			}
		}
		cout << G << endl;
	}
}
