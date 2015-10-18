#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<list>
#include<cstring>
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

int n, res,a[105];

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d", &a[i]);
    res += a[i];
  }
  FOR(i, 1, n-1)
    if(a[i] == 0 && a[i-1] == 1 && a[i+1] == 1)
      res++;
  
  printf("%d\n", res);

  return 0;
}