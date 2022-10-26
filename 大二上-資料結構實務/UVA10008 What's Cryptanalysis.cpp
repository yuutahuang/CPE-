#include <iostream> ///C++
#include <cstring> ///為了strlen()
#include <cstdio> ///為了gets()
using namespace std;
int main()
{
	int t, total=0;
	char line[1000]={0};
	int a[26]={0};

	cin >> t;
	for (int i=0; i<=t; i++){
		gets(line);
		int n=strlen(line); ///先提出才不會重複計算
		for (int j=0; j<n; j++){
			if (line[j] >= 'a' && line[j] <= 'z'){
				a[line[j]-'a']++; ///a[line[j]-'a'], a=97
				total++;          ///if line[j]=c, line[j]= c-a = 99-97=2
                                  ///a[2]++;
			}else if (line[j] >= 'A' && line[j] <= 'Z'){
				a[line[j]-'A']++; ///A=65
				total++;
			}
 		}
	}
	for (int i=total; i>0; i--){
		for (int j=0;j<26;j++){ /// if j=2, 2+'A'(A=65) = 67
                                /// (char)(j+'A') = 67 = C
            if (a[j]==i) cout << (char)(j+'A') << " " << i << endl;
		}
	}
}
