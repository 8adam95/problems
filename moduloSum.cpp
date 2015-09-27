//http://codeforces.com/problemset/problem/577/B

#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
#include<set>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 1000006;

int n, m, a[MAXN];
vector<int> v;
bool ok[MAXN];

int main()
{
  scanf("%d %d", &n, &m);
  FOR(i, 1, n)
    scanf("%d", &a[i]);
   
    
  FOR(i, 1, n)
  {
    int si = v.size();
    REP(j, si)
    {
      int h = (a[i] + v[j])%m;
      if(!ok[h])
      {
	ok[h] = true;
	v.PB(h);
      }
    }
    if(!ok[a[i]%m])
    {
      ok[a[i]%m] = true;
      v.PB(a[i]%m);
    }
    if(ok[0])
      return printf("YES\n"), 0;
  }
  printf("NO\n");
  
  return 0;
}