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
      {
	FOR(k, 1, n)
	  tab[k][j] = false;
	FOR(k, 1, m)
	  tab[i][k] = false;
      }
      
  bool bug = false;  
    
  FOR(i, 1, n)
    FOR(j, 1, m)
    {
      if(a[i][j])
      {
	FOR(k, 1, m)
	  if(tab[i][k])
	    bug = true;
	FOR(k, 1, n)
	  if(tab[k][j])
	    bug = true;
      }
    }
    
  if(!bug)
    return printf("NO\n"), 0;
  
  printf("YES\n");
  FOR(i, 1, n)
  {
    FOR(j, 1, m)
      printf("%d ", tab[i][j]);
    printf("\n");
  }


  return 0;
}