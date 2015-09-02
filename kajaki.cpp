//http://main.edu.pl/pl/archive/oi/4/kaj

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 30005;
int a[MAXN], cnt = 0;

int main()
{
  int w, n;
  scanf("%d %d", &w, &n);
  REP(i, n)
    scanf("%d", a+i);
    
  sort(a, a+n);
  
  int start = 0, end = n-1;
  while(start <= end)
  {
    if(a[start] + a[end] <= w)
      cnt++, start++, end--;
    else
      cnt++, end--;
  }
  printf("%d\n", cnt);

  return 0;
}