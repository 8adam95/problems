//http://codeforces.com/problemset/problem/349/A

#include<cstdio>
#include<iostream>
using namespace std;

int cnt, cnt50, cnt100, n;

int main()
{
  scanf("%d", &n);
  while(n--)
  {
    int a;
    scanf("%d", &a);
    if(a == 25)
      cnt++;
    else if(a == 50)
    {
      if(cnt)
	cnt50++, cnt -= 1;
      else
	return printf("NO\n"), 0;
    }
    else
    {
      if(cnt50 && cnt)
	cnt50--, cnt--, cnt100++;
      else if(cnt >= 3)
	cnt -= 3, cnt100++;
      else
	return printf("NO\n"), 0;
    }
  }
  printf("YES\n");
  
  
  return 0;
}