#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<cmath>
#include<map>
#include<algorithm>
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

int n, m, d;
int a[10006], cnt;

int main()
{
  scanf("%d %d %d", &n, &m, &d);
  n*=m;
  REP(i, n)
    scanf("%d", &a[i]);
    
  sort(a, a+n);
    
  FOR(i, 1, n-1)
    a[i] -= a[0];
  a[0] = 0;
    
  REP(i, n)
  {
    if(a[i]%d)
      return printf("-1\n"), 0;
    else
      a[i]/=d;
  }
  int C = a[n/2];
  
  int res = 0;
  
  REP(i, n)
    res += abs(a[i]-C);
    
  printf("%d\n", res);


  return 0;
}