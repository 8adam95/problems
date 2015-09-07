//http://codeforces.com/problemset/problem/467/B
#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S 
#define MP make_pair
#define PB push_back

const int MAXN = 22;

int n, m, k, a[MAXN], tab[MAXN], res[MAXN];

void pow2()
{
  tab[0] = 1;
  FOR(i, 1, 21)
    tab[i] = tab[i-1]*2;
  
}

int main()
{
  scanf("%d %d %d", &n, &m, &k);
  REP(i, m+1)
    scanf("%d", a+i);
  
  pow2();
  
  int l = 20;
  
  while(a[m] > 0)
      res[l] = (a[m] >= tab[l]), a[m] -= (a[m] >= tab[l])*tab[l], l--;
  
  
  int sol = 0;
  REP(i, m)
  {
    int l = 20, resu = 0;
    while(l >= 0)
    {
      if(a[i] >= tab[l])
      {
	if(res[l] == 0)
	  resu++;
	a[i] -= tab[l], l--;

      }
      else
      {
	if(res[l] == 1)
	  resu++;
	l--;
      }
    }
    if(resu <= k)
      sol++;
  }
  printf("%d\n", sol);
  

  return 0;
}