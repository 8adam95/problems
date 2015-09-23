//http://codeforces.com/problemset/problem/455/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
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

const int MAXN = 100006;

ll max(ll a, ll b)
{
  if(a > b)
    return a;
  return b;
}

int n, t[MAXN];
ll res[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    int a;
    scanf("%d", &a);
    t[a]++;
  }
  
  FOR(i, 0, 100005)
    res[i] = 0;
    
  FORD(i, 100005, 0)
    res[i] = max(res[i+1], res[i+2] + (ll)i*t[i]);
  
  
  cout << res[0] << "\n";
  
  return 0;
}