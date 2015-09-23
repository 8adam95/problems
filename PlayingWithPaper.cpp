//http://codeforces.com/problemset/problem/527/A


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


int main()
{
  ll a, b;
  cin >> a >> b;
  
  if(b == 1)
    return cout << a << "\n", 0;
  
  ll cnt = 0;
  
  while(a > 0 && b > 0)
  {
    if(a >= b)
      cnt += a/b, a %= b;
    else
      cnt += b/a, b %= a;
  }
  cout << cnt << "\n";
  
  
  
  return 0;
}