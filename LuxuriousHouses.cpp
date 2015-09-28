#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<list>
using namespace std;

#define REP(I, N) for(int I = 0; I , (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 100005;

int n, a[MAXN], maks[MAXN], last[MAXN];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &a[i]);
  
  FORD(i, n, 1)
  {
    if(maks[i+1] > a[i])
      maks[i] = maks[i+1], last[i] = last[i+1];
    else if(maks[i+1] == a[i])
      maks[i] = a[i], last[i] = last[i+1];
    else
      maks[i] = a[i], last[i] = i;
    
  }
  
  FOR(i, 1, n)
  {
    if(maks[i] == a[i] && last[i] == i)
      printf("%d ", 0);
    else if(maks[i] == a[i] && last[i] != i)
      printf("1 ");
    else
      printf("%d ", maks[i]-a[i]+1);
  }
  printf("\n");
    

  return 0;
}