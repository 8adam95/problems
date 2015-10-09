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

const int MAXN = 105;

int n, k, a[MAXN], tab[MAXN][MAXN];

int main()
{
  scanf("%d %d", &n, &k);
  
  REP(i, n)
  {
    scanf("%d", a+i);
    REP(j, a[i])
      tab[i][j%k]++;
  }
  
  REP(i, n)
    REP(j, n)
      REP(p, k)
	if(abs(tab[i][p]-tab[j][p]) > 1)
	  return printf("NO\n"),0;
  
  
  printf("YES\n");
  REP(i, n)
  {
    REP(p, a[i])
	printf("%d ", p%k+1);
    printf("\n");
  }
      
  return 0;
}