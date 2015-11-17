#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<list>
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

const int MAXN = 200005;

int n, b[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", &b[i]);
  
  ll sum = 0;
  int prev = 0;
  FOR(i, 0, n-1)
  {
    sum += abs(b[i]-prev);
    prev = b[i];
  }
  
  cout << sum << "\n";

  return 0;
} 