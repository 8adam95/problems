//http://codeforces.com/problemset/problem/546/B


#include<cstdio>
#include<iostream>
#include<set>
#include<map>
#include<vector>
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

const int MAXN = 3005;

int n, a[MAXN], cnt;
int vis[MAXN];

int main()
{
  scanf("%d", &n);
  
  FOR(i, 1, n)
    scanf("%d", &a[i]);
    
  sort(a+1, a+n+1);
  
  FOR(i, 1, n)
  {
    if(a[i-1] >= a[i])
      cnt += a[i-1]-a[i]+1, a[i] = a[i-1]+1;
  }
  printf("%d\n", cnt);

  return 0;
}