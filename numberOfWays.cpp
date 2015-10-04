#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<cstring>
#include<cmath>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 500005;

int n, a[MAXN];
ll sum, cnt[MAXN];

int main()
{
  scanf("%d", &n);
  
  FOR(i, 1, n)
    scanf("%d", &a[i]), sum += a[i];
  
  if(sum%3 != 0)
    printf("0\n");
  else
  {
    sum /= 3;
    ll s1 = 0;
    
    FORD(i, n, 1)
    {
      s1 += a[i];
      if(s1 == sum)
	cnt[i] = 1;
    }
    
    int s2 = 0;
    
    FORD(i, n-1, 1)
      cnt[i] += cnt[i+1];
      
    ll ans = 0;
    s1 = 0;
    for(int i = 1; i+2 <= n; i++)
    {
      s1 += a[i];
      if(s1 == sum)
	ans += cnt[i+2];
    }
    cout << ans << "\n";
    
    
  }
 
  

  return 0;
}