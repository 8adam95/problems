#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<list>
#include<queue>
#include<cmath>
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
  int n, t;
  scanf("%d %d", &n, &t);
  if(t != 10)
  {
    printf("%d", t);
    REP(i, n-1)
      printf("0");
    printf("\n");
  }
  else
  {
    if(n >= 2)
    {
      printf("10");
    REP(i, n-2)
      printf("0");
    printf("\n");
    }
    else
      printf("-1\n");
  }


  return 0;
}