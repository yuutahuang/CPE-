#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n, m, times=0;
	while(cin>>n>>m&&(n!=0 &&m!=0)){
		int field[101][101]={0};
		char c;
		getchar();
		if(times) cout<<endl;
		cout<<"Field #"<<++times<<":"<<endl;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				c=getchar();
				if(c=='*'){
					field[i][j]=-101;
					for(int k=-1;k<=1;k++)
						for(int l=-1;l<=1;l++)
							field[i+k][j+l]++;
				}
			}
			getchar();
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(field[i][j]<0) cout<<"*";
				else cout<<field[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
