#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<cstring>
#include<cmath>
#include<list>
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

int main()
{
  ll p, d;
  ll in = 1, num = 0, ans = 1;
  
  cin >> p >> d;
  
  FOR(i, 0, 18)
  {
    if(p < num)
      break;
    ll x = (p-num)/in;
    if(x*in + num >= p-d)
      ans = x*in+num;
    in *= 10;
    num = num*10+9;
  }
  cout << ans << "\n";


  return 0;
}