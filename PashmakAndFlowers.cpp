//http://codeforces.com/problemset/problem/459/B


#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
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

int n, mini = 1000000000, maks = -10, cnt = 0, miniCnt = 0;

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    int a;
    scanf("%d", &a);
    if(a == maks)
      cnt++;
    if(a > maks)
      maks = a, cnt = 1;
    if(a == mini)
      miniCnt++;
    if(a < mini)
      mini = a, miniCnt = 1;
  }
  printf("%d ", maks-mini);
  if(maks != mini)
    cout << (ll)cnt*(ll)miniCnt << "\n";
  else
    cout << (ll)((ll)cnt*(ll)(cnt-1)/2);

  return 0;
}