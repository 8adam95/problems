//http://codeforces.com/problemset/problem/465/B


#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cstring>
#include<map>
#include<list>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 1005;

int n, a[MAXN];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", a+i);
  
  int start = 1;
  int cnt = 0;
  
  a[0] = 1000;
  
  int last = -1;
  
  FORD(i, n, 1)
    if(a[i] == 1)
      last = max(last, i);
  
  while(start <= n)
  {
    while(a[start] == 1)
      cnt++, start++; //open
    if(start >= last)
      break;
    
    while(a[start] == 0 && a[start-1] == 1)
      start++, cnt++;
    while(a[start] == 0 && a[start-1] != 1)
      start++;
    
    
  }
    
  printf("%d\n", cnt);
  
  return 0;
}