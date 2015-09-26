//http://codeforces.com/problemset/problem/450/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
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

int n, m, last;
queue<pair<int, int> > Q;

int main()
{
  scanf("%d %d", &n, &m);
  REP(i, n)
  {
    int a;
    scanf("%d", &a);
    Q.push(MP(a, i+1));
    last = a;
  }
  while(!Q.empty())
  {
    int u = Q.front().F;
    last = Q.front().S;
    
    Q.pop();
    
    if(u > m)
      u -= m, Q.push(MP(u, last));
  }
  printf("%d\n", last);
    
  
  return 0;
}