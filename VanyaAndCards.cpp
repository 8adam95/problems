//http://codeforces.com/problemset/problem/401/A

#include<cstdio>
#include<algorithm>
using namespace std;

int res = 0;

int main()
{
  int n, x, a, cnt = 0;
  scanf("%d %d", &n, &x);
  while(n--)
    scanf("%d", &a), cnt += a;

    
  if(cnt < 0)
    cnt = -cnt;
  while(cnt > 0)
  {
    cnt -= x;
    res++;
  }
  printf("%d\n", res);

  return 0;
}