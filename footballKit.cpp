#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

const int MAXN = 100005;

#define REP(I, N) for(int I = 0; I < (N); I++)

int n, a[MAXN], b[MAXN], howMuch[MAXN], howMuch2[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d %d", a+i, b+i);
    howMuch[a[i]]++;
  }  
  REP(i, n)
    printf("%d %d\n", n-1+howMuch[b[i]], (n-1)+(n-1)-(n-1+howMuch[b[i]]));
   
  
  
  return 0;
}