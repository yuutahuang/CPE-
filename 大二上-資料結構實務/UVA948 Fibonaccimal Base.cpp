#include <iostream>
using namespace std;
int main()
{
	int fib[39], n, in1;
	fib[0]=1;
	fib[1]=2;
	for(int i=2;i<39;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	cin>>n;
	while(n--){
		cin>>in1;
		cout<<in1<<" = ";
		int flag=0;
		for(int i=38;i>=0;i--){
			if(in1-fib[i]>=0){
				cout<<"1";
				in1=in1-fib[i];
				flag=1;
			}
			else if(flag==1)cout<<"0";
		}
		cout<<" (fib)"<<endl;
	}
}

