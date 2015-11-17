#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#include<list>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

pair<int, int> C[10];

int main()
{
  int n;
  scanf("%d", &n);

  REP(i, n)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    C[i] = MP(a,b);
  }
  
  if(n == 1)
    return printf("-1\n"), 0;
  
  if(n == 2)
  {
    if(C[0].F == C[1].F || C[0].S == C[1].S)
      return printf("-1\n"), 0;
    return printf("%d\n", abs(C[1].F-C[0].F)*abs(C[1].S-C[0].S)), 0; 
  }
  
  int dx = 0, dy = 0;
  
  REP(i, n)
    for(int j = i+1; j < n; j++)
      if(C[i].F != C[j].F)
      {
	dx = abs(C[i].F-C[j].F);
	i = j = n;
	break;
      }

  REP(i, n)
    for(int j = i+1; j < n; j++)
      if(C[i].S != C[j].S)
      {
	dy = abs(C[i].S-C[j].S);
	i = j = n;
	break;
      }
      
   return printf("%d\n", dx*dy), 0;
      
  return 0;
}