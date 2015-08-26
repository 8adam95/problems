//http://main.edu.pl/pl/archive/ilocamp/2010/tab
//ILOCAMP 2010

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)


const int MAXN = 1000006;

int n, m, a[MAXN], b[MAXN], cnt1[MAXN], cnt2[MAXN];

int main()
{
  scanf("%d %d", &n, &m);
  REP(i, n)
    scanf("%d", &a[i]);
  REP(i, m)
    scanf("%d", &b[i]);
  
  //I count how many "1" is to 'i-th' position in both rows 
  //we now that numbers of "1" is non-decreasing
  cnt1[0] = a[0];
    
  
  
  FOR(i, 1, n-1)
    cnt1[i] = cnt1[i-1]+a[i];
    
  cnt2[0] = b[0];
    
  FOR(i, 1, n-1)
      cnt2[i] = cnt2[i-1]+1;
    

  return 0;
}