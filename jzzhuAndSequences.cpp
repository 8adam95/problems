#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<cmath>
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

int mod = 1000000007;

int main()
{
  ll x, y;
  int n;
  cin >> x >> y >> n;
  n %= 6;

  if(n == 1)
    cout << (x+mod+mod)%mod << "\n";
  else if(n == 2)
    cout << (y+mod+mod)%mod << "\n";
  else if(n == 3)
    cout << (y-x+mod+mod)%mod << "\n";
  else if(n == 4)
    cout << (-x+mod+mod)%mod << "\n";
  else if(n == 5)
    cout << (-y+mod+mod)%mod << "\n";
  else if(n == 0)
    cout << (-y+x+mod+mod)%mod << "\n";
    

  return 0;
}