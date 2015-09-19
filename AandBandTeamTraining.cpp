//http://codeforces.com/problemset/problem/519/C

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
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

int n, m, cnt = 0;

int main()
{
  scanf("%d %d", &n, &m);
  
  if(n >= 2*m)
    return printf("%d\n", m), 0;
  if(m >= 2*n)
    return printf("%d\n", n), 0;

  while(n+m >= 3 && n > 0 && m > 0)
  {
    if(n > m)
      n -= 2, m -= 1, cnt++;
    else
      m -= 2, n -= 1, cnt++;
  }

  printf("%d\n", cnt);


  return 0;
}