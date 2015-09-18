//http://codeforces.com/problemset/problem/489/C

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

int m, s, tab[105];

int main()
{
  scanf("%d %d", &m, &s);
  
  if(m == 1 && s == 0)
    return printf("0 0\n"), 0;
  
  
  tab[1] = 1;
  for(int i = 2; i <= m; i++)
    tab[i] = 0;
  int x = s;
  x--;
  
  for(int i = m; i >= 1; i--)
  {
    while(x > 0 && tab[i] < 9)
      x--, tab[i]++;
    if(x == 0)
      break;
  }
  
  if(x > 0 || x < 0)
    printf("-1");
  
  else
    FOR(i, 1, m)
      printf("%d", tab[i]);
  printf(" ");
 
  tab[1] = 1;
  FOR(i, 2, m)
    tab[i] = 0;
  s--;
  for(int i = 1; i <= m; i++)
  {
    while(s > 0 && tab[i] < 9)
      s--, tab[i]++;
    if(s == 0)
      break;
  }
  if(s > 0 || s < 0)
    printf("-1");
  else
  FOR(i, 1, m)
    printf("%d", tab[i]);
  
  printf("\n");
  
  return 0;
}