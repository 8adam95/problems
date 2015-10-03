#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
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


const int MAXM = 1005;

int n, m, k, a[MAXM], friends, cnt[MAXM][22];
int tab[22];

void pow()
{
  tab[0] = 1;
  FOR(i, 1, 20)
    tab[i] = tab[i-1]*2;
}

void bin(int p, int k)
{
  FORD(i, 20, 0)
    if(tab[i] <= p)
      p -= tab[i], cnt[k][i] = 1;
  
}

int main()
{
  pow();
  scanf("%d %d %d", &n, &m, &k);
  
  FOR(i, 1, m+1)
    scanf("%d", &a[i]);
    
  bin(a[m+1], m+1);
    
    
  FOR(i, 1, m)
  {
    int res = 0;
    bin(a[i], i);
    REP(j, 21)
      if(cnt[i][j] != cnt[m+1][j])
	res++;
    if(res <= k)
      friends++;
  }
  printf("%d\n", friends);
  
  
  
  return 0;
}