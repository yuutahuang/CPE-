#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int caseCount;
  while( scanf("%d", &caseCount) != EOF ){
    for( int caseNumber = 0 ; caseNumber < caseCount ; ++caseNumber ){
      int G, L;
      scanf("%d%d", &G, &L);

      if( L % G == 0 ){
        printf("%d %d\n", G, L);
      }
      else{
        printf("-1\n");
      }
    }
  }
  return 0;
}
