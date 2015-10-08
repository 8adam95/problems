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

const int MAXN = 100010;

char a[MAXN] = {}, b[MAXN] = {}, res[MAXN] = {};

int main()
{
  int n, t, cnt1 = 0, cnt2 = 0;
  
  scanf("%d %d", &n, &t);
  
  cin >> (a+1) >> (b+1);
  
  FOR(i, 1, n)
  {
    if(a[i] == b[i])
      ++cnt1;
    else
      ++cnt2;
  } 
  if(t > n || (cnt2+1)/2>t)
    puts("-1");
  else
  {
    int dif = n-t, l = 0;
    for(int i = 1; i <= n; ++i)
      for(char ch = 'a'; ch <= 'z'; ++ch)
	if(ch != a[i] && ch != b[i])
	{
	  res[i] = ch;
	  break;
	}
    for(int i = 1; i <= n && dif; ++i)
      if(a[i] == b[i])
      {
	dif--;
	res[i] = a[i];
      }
      else
      {
	if(l)
	{
	  --dif;
	  res[l] = a[l];
	  res[i] = b[i];
	  l = 0;
	}
	else
	  l = i;
      }
      puts(res+1);
  }

  return 0;
}