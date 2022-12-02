#include <iostream>
using namespace std;
void swap(int *a,int *b)//¥æ´«ªº²[¦¡
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n,m,i,j;
	while(cin>>n>>m){
		if(n==0&&m==0){
            cout<<"0 0"<<endl;
			break;
		}else{
			cout<<n<<" "<<m<<endl;
		}

        int num[n]={0};
		for(i =0;i<n;i++) cin>>num[i];
		for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(num[j]%m>num[j+1]%m){
					swap(&num[j],&num[j+1]);
				}else if(num[j]%m==num[j+1]%m){
					if(num[j+1]%2!=0&&num[j]%2==0){
						swap(&num[j],&num[j+1]);
					}else if(num[j]%2!=0&&num[j+1]%2!=0){
						if(num[j]<num[j+1]){
							swap(&num[j],&num[j+1]);
						}
					}else if(num[j]%2==0&&num[j+1]%2==0){
						if(num[j]>num[j+1]){
							swap(&num[j],&num[j+1]);
						}
					}
				}
			}
		}

		for(i=0;i<n;i++) cout<<num[i]<<endl;
	}
}
