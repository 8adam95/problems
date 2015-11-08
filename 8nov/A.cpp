#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<list>
#include<cstring>
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
  int n, m, cnt = 0;
  scanf("%d %d", &n, &m);
  REP(i, n)
    REP(j, m)
    {
      int a, b;
      scanf("%d", &a);
      scanf("%d", &b);
      if(a || b)
	cnt++;
     }
     
     printf("%d\n", cnt);
     


  return 0;
}
