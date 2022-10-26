///UVA10035 Primary Arithmetic
#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while (cin >> n >> m){
		if (n==0 && m==0) break;
		int carry=0, count=0;
		while (n!=0 || m !=0){
			if (n%10 + m%10 + carry >= 10){
				count++;
				carry=1;
			}else carry=0;
			n/=10;
			m/=10;
		}
		if (count==1) cout << "1 carry operation." << endl;
		else if (!count) cout << "No carry operation." << endl;
		else cout << count << " carry operations." << endl;
	}
}
