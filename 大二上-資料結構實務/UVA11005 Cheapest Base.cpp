#include <iostream>
using namespace std;
int main()
{
	int x,c[40],cs,n;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		for(int j=0;j<36;j++)
		cin>>c[j];
		cout<<"Case "<<i<<":"<<endl;;
		cin>>cs;
		while(cs--)
		{
			int m=2000000000,s[40]={0};cin>>n;
			for(int k=2;k<=36;k++)
			{
				int t=n;
				while(t){s[k]+=c[t%k];t/=k;}
				if(s[k]<m)m=s[k];

			}
			cout<<"Cheapest base(s) for number "<<n<<":";
				for(int k=2;k<=36;k++)
				if(s[k]==m)cout<<" "<<k;
				cout<<endl;
		}if(i!=x)cout<<endl;
	}
}
