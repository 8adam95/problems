#include<cstdio>
#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<queue>
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

int n, x, y;
bool vis[1005];
pair<int, int> tab[1005];

int main()
{
  scanf("%d %d %d", &n, &x, &y);
  REP(i, n)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    a -= x, b -= y;
    tab[i] = MP(a, b);
  }
  
  int cnt = 0;
  
  REP(i, n)
    if(!vis[i])
      {
	cnt++;
	REP(j, n)
	  if(!vis[j] && tab[i].F*tab[j].S == tab[i].S*tab[j].F)
	    vis[j] = true;
      }
  printf("%d\n", cnt);
  
    
  

  return 0;
}