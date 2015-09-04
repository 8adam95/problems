//http://main.edu.pl/pl/archive/oig/6/rat

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back



bool pit(ll x, ll y, ll a,  ll b, ll k)
{
  if((max(a,x)-min(a,x))*(max(a,x)-min(a,x))+((max(b,y)-min(b,y))*(max(b,y)-min(b,y))) <= k*k)
    return true;
  return false;
}

int main()
{
  int n;
  ll k, x, y;
  
  scanf("%d %lld %lld %lld", &n, &k, &x, &y);
  
  int cnt = 0;
  
  REP(i, n)
  {
    ll a, b;
    scanf("%lld %lld", &a, &b);
    cnt += pit(x,y, a, b, k);
  }
  
  printf("%d\n", n-cnt);
  
  return 0;
}