//http://main.edu.pl/pl/archive/ilocamp/2010/rol

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
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

const int MAXN = 1000006;

ll minHight = 1000000000009LL;
ll b[MAXN];
int n;

ll foo(ll k)
{
  if(k < 0)
    return -k;
  return k;
}

long long int sum(long long int k)
{
  ll ret = 0;
  FOR(i, 1, n)
    ret += foo(k-b[i]);
  return ret;
}

int main()
{
  scanf("%d", &n);
  
  FOR(i, 1, n)
  {
    ll a;
    scanf("%lld %lld", &a, &b[i]);
    //We don't want to roll more than length of any roll
    minHight = min(minHight, a);
  }
  
  ll b = 0;
  
  while(minHight-b > 1)
  {
    ll C = (b+minHight)/2;
    ll a1 = sum(C-1);
    ll a2 = sum(C);
    
    if(a1 >= a2)
      b = C;
    else
      minHight = C;
  }
  if(sum(b) < sum(minHight))
    printf("%lld\n", sum(b));
  else
    printf("%lld\n", sum(minHight));
  
  
  return 0;
} 