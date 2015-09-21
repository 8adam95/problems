//http://codeforces.com/problemset/problem/451/B

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
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

const int MAXN = 100005;

int a[MAXN], tab[MAXN], l;

int main()
{
  int n;
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &a[i]);

  int start = 0, end = 0;

  FOR(i, 1, n)
    if(a[i+1] < a[i])
    {
      start = i;
      break;
    }
    
  a[n] = 1000000000;  
  
  FOR(i, start, n)
  {
    if(a[i+1] > a[i])
    {
      end = i;
      break;
    }
  }
  
  printf("%d %d\n", start, end);

  FOR(i, 1, start-1)
    tab[i] = a[i], l = i;
    
  FORD(i, end, start)
    tab[l++] = a[i];
  
  FOR(i, end+1, n)
    tab[i] = a[i];
  
  FOR(i, 1, n)
    if(tab[i+1] < tab[i])
      return printf("no\n"), 0;
  
  printf("yes\n%d %d\n", start+1, end+1);
    
    
  return 0;
}