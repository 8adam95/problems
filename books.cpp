#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<cmath>
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

const int MAXN = 100005;

int n, t, a[MAXN], res[MAXN], cnt;

int main()
{
  scanf("%d %d", &n, &t);
  FOR(i, 1, n)
    scanf("%d", &a[i]), res[i] = res[i-1]+a[i];
    
  int r = 1;
  int l = 1;
    
  while(r <= n)
  {

    while(res[r+1]-res[l-1] <= t && r < n)
      r++;
    while(res[r]-res[l-1] > t)
      l++;
    
    cnt = max(cnt, r-l+1);
    while(res[r]-res[l-1] > t)
      l++;
    
    r++;
    while(res[r]-res[l-1] > t && l < r)
      l++;
    
  }
  printf("%d\n", cnt);
    
  return 0;
}