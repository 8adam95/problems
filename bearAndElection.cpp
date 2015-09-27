#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<set>
#include<queue>
#include<set>
using namespace std;


#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)

int n, a[1005];
int maks, res;

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", a+i);
  

  while(true)
  {
    maks = 0;
    FOR(i, 1, n-1)
      if(a[i] >= a[maks])
	maks = i;
    if(maks == 0)
      break;
    res++;
    a[0]++;
    a[maks]--;
  }
  printf("%d\n", res);
  return 0;
}