//http://codeforces.com/problemset/problem/489/B


#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cstring>
#include<map>
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

const int MAXN = 110;

int n, m, a[MAXN], b[MAXN], cnt;

int main()
{
  scanf("%d", &n);
  
  REP(i, n)
    scanf("%d", a+i);
  sort(a, a+n);
  
  scanf("%d", &m);
  
  REP(i, m)
    scanf("%d", b+i);
  sort(b, b+m);
  int l = 0;
  int r = 0;
  while(l < n && r < m)
  {
    if(a[l] == b[r] || a[l]+1 == b[r] || a[l]-1 == b[r] || a[l] == b[r]+1 || a[l] == b[r]-1)
      cnt++, l++, r++;
    while(a[l] > b[r]+1 && r < m)
      r++;
    while(a[l]+1 < b[r] && l < n)
      l++;
  }
  printf("%d\n", cnt);
  
  
  return 0;
}