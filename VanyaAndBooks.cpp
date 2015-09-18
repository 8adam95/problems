//http://codeforces.com/problemset/problem/552/B

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
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

int n;
ll res, cnt;

int main() 
{
  scanf("%d", &n);
  int x = n;
  
  while(x)
  {
    x /= 10;
    cnt++;
  }
  res = n*cnt+cnt-1;
  
  ll k = 1;
  
  REP(i, cnt-1)
    k*=10, res -= k;
    
    
  cout << res << "\n";
  
  
  return 0;
}