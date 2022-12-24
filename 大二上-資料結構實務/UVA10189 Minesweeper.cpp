#include<iostream>
using namespace std;
int main(){
	int n,m,t=0;
	char c;
	while(cin>>n>>m&&(n!=0&&m!=0)){
		getchar();
		if(t) cout<<endl;
		int a[101][101]={};
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				c=getchar();
				if(c=='*'){
					a[i][j]=-100;
					for(int k=-1;k<=1;k++)
						for(int l=-1;l<=1;l++)
							a[i+k][j+l]++;
				}
			}
			getchar();
		}
		cout<<"Field #"<<++t<<":\n";
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]>=0)
					cout<<a[i][j];
				else
					cout<<"*";
			}
			cout<<endl;
		}
	}
	return 0;
}
