//http://codeforces.com/problemset/problem/580/C

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
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

int n, m, cnt;
int cat[MAXN];
vector<int> adj[MAXN];

void dfs(int k, int current, int max_value, int pre)
{
  bool n_leaf = false;
  
  for(int i = 0; i < adj[k].size(); i++)
  {
    int u = adj[k][i];
    if(u == pre)
      continue;
    n_leaf = true;
    int ncurr = ((cat[u] == 1) ? (current+1) : (0));
    int nmax = max(max_value, ncurr);
    dfs(u, ncurr, nmax, k);
  }
  if(!n_leaf && max_value <= m)
    cnt++;
}

int main()
{
  scanf("%d %d", &n, &m);
  FOR(i, 1, n)
    scanf("%d", &cat[i]);

    
  REP(i, n-1)
  {
    int u, v;
    scanf("%d %d", &u, &v);
    adj[v].PB(u);
    adj[u].PB(v);
  }
  
  dfs(1, cat[1], cat[1], -1);
  printf("%d\n", cnt);
  
    
  return 0;
}