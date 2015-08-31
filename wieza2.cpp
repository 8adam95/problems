//http://main.edu.pl/pl/archive/ilocamp/2010/wiz

#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
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

const int MAXN = 500005;

int hi[MAXN];

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  
  FOR(i, 1, n)
  {
    int a;
    scanf("%d", &a), hi[i] = max(hi[i-1], a);
  }
  
  int end = n;
  
  while(m--)
  {
    int b;
    scanf("%d", &b);
    while(end >= 0 && hi[end] >= b)
      end--;
    end = max(end, 0);
    hi[end] = 1000000009;
    printf("%d ", end);
  }
  
  printf("\n");
  
  return 0;
}