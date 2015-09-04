//http://main.edu.pl/pl/archive/ilocamp/2010/per

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 1000006;

int n, a[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", a+i);
  
  sort(a, a+n);
  FOR(i, 1, n)
    if(a[i-1] != i)
      return printf("NIE\n");
    
  printf("TAK\n");
    
  
  return 0;
}