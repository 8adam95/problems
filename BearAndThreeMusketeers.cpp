#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<set>
#include<queue>
#include<set>
using namespace std;


#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)

const int MAXN = 4004;

int n, m, degree[MAXN], a[MAXN][MAXN];
int res = 1000006;

int main()
{
  scanf("%d %d", &n, &m);
  REP(i, m)
  {
    int u, v;
    scanf("%d %d", &u, &v);
    a[u][v] = a[v][u] = true;
    degree[u]++, degree[v]++;
  }
  
  FOR(i, 1, n)
    FOR(j, i+1, n)
      if(a[i][j])
	FOR(k, j+1, n)
	  if(a[i][k] && a[k][j])
	    res = min(res, degree[i] + degree[j] + degree[k]);
  

  if(res == 1000006)
    printf("-1\n");
  else
    printf("%d\n", res-6);
  
  return 0;
}