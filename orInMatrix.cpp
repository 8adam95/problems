#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
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

int n, m, a[105][105];
bool tab[105][105];

void clean(int a, int b)
{
  FOR(i, 1, m)
    tab[a][i] = false;
  FOR(i, 1, n)
    tab[i][b] = false;
}


int main()
{
  scanf("%d %d", &n, &m);
  FOR(i, 1, n)
    FOR(j, 1, m)
    {
      tab[i][j] = true;
      scanf("%d", &a[i][j]);
    }
  FOR(i, 1, n)
    FOR(j, 1, m)
      if(!a[i][j])
	clean(i, j);
    
  FOR(i, 1, n)
    FOR(j, 1, m)
    {
      if(a[i][j])
      {
	int bug = 0;
	FOR(k, 1, m)
	  bug = bug||tab[i][k];
	FOR(k, 1, n)
	  bug = bug||tab[k][j];
	if(!bug)
	  return printf("NO\n"), 0;
      }
    }
    
  
  printf("YES\n");
  FOR(i, 1, n)
  {
    FOR(j, 1, m)
      printf("%d ", tab[i][j]);
    printf("\n");
  }


  return 0;
}