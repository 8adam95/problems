#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<list>
#include<queue>
#include<cmath>
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
  int n;
  scanf("%d", &n);
  
  ll pow3 = 1;
  ll pow7 = 1;
  
  
  FOR(i, 1, n)
  {
      pow3 *= 27;
      pow7 *= 7;
      pow3%=1000000007;
    pow7%=1000000007;
      
  }
  cout << (pow3-pow7+1000000007)%1000000007 << "\n";

  return 0;
}