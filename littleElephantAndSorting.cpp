#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
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

const int MAXN = 100005;

int n;
ll a[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    cin >> a[i];
   
  ll cnt = 0;
    
  FOR(i, 1, n-1)
  {
    a[i] += cnt;
    if(a[i] >= a[i-1])
      continue;
    cnt += a[i-1]-a[i];
    a[i] = a[i-1];
  }
  
  cout << cnt << "\n";

  return 0;
}