#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<list>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 3005;

int a[MAXN], b[MAXN];

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  REP(i, n)
    scanf("%d", a+i);
  REP(i, m)
    scanf("%d", b+i);

  int res = min(n, m);
  
  FORD(i, res, 0)
  {
    bool isOk = true;
    FOR(j, 0, i-1)
      if(a[j] > b[m-i+j])
	isOk = false;
    if(isOk)
      return printf("%d\n", n-i), 0;
      
  }
  return 0;
}