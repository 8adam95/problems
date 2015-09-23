//


#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back


int main()
{
  int x1,x2,y1,y2;
  
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  int side  = 0;
  if(x1 == x2)
  {
    side = (abs)(y2-y1);
    printf("%d %d %d %d\n", x1+side,y1, x2+side, y2);
  }
  else if(y1 == y2)
  {
    side = (abs)(x2-x1);
    printf("%d %d %d %d\n", x1, y1+side, x2, y2+side);
  }
  else
  {
    if((abs)(x2-x1) == (abs)(y2-y1))
    {
      printf("%d %d %d %d\n", x1, y2, x2, y1);
    }
    else
      printf("-1\n");
    
  }
    



  return 0;
}
