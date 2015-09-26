#include<cstdio>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<iostream>
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

int n, a[MAXN], res, cnt;

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", a+i);

  cnt = 0;
    
  FOR(i, 1, n)
  {
    if(a[i] >= a[i-1])
      cnt++;
    else
      cnt = 1;
    
    res = max(res, cnt);
    
  }
  
  printf("%d\n", res);
    
  return 0;
}