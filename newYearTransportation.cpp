//http://codeforces.com/problemset/problem/500/A

#include<cstdio>
#include<iostream>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<vector>
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

const int MAXN = 30005;

queue<int> Q;
vector<int> v[MAXN];
bool visited[MAXN];

void bfs(int a)
{
  Q.push(a);
  while(!Q.empty())
  {
    int u = Q.front();
    Q.pop();
    for(int i = 0; i < v[u].size(); i++)
      if(!visited[v[u][i]])
      {
	visited[v[u][i]] = true;
	Q.push(v[u][i]);
      }
  }
}

int main()
{
  int n, target;
  scanf("%d %d", &n, &target);
  FOR(i, 1, n-1)
  {
    int a;
    scanf("%d", &a);
    v[i].PB(a+i);
  }
  bfs(1);
  
  if(visited[target])
    printf("YES\n");
  else
    printf("NO\n");
  
  return 0;
}