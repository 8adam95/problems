#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<list>
#include<cstring>
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

int n, m, t[100006], a, b, c;

int main()
{
  scanf("%d %d", &n, &m);
  REP(i, m)
  {
    scanf("%d %d %d", &a, &b, &c);
    if(t[a] != 0)
    {
      t[b] = t[a]%3+1;
      t[c] = t[b]%3+1;
    }
    else if(t[b] != 0)
    {
      t[c] = t[b]%3+1;
      t[a] = t[c]%3+1;
    }
    else if(t[c] != 0)
    {
      t[a] = t[c]%3+1;
      t[b] = t[a]%3+1;
    }
    else
    {
      t[a] = 1;
      t[b] = 2;
      t[c] = 3;
    }
  }
  FOR(i, 1, n)
    printf("%d ", t[i]);
  printf("\n");
  
  
  return 0;
}