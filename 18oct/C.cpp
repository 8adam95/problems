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

const int MAX = 10000;

int n, a, tab[150], t[150], br[150], b[150];

int main()
{
  scanf("%d", &n);
 
  tab[1] = 0;
  t[n] = 0;
  
  FOR(i, 2, n)
  {
    scanf("%d", &a);
    tab[i] = tab[i-1]+a;
  }
  FOR(i, 1, n-1)
    scanf("%d", &b[i]);
    
  FORD(i, n-1, 1)
    t[i] = t[i+1]+b[i];
  
  FOR(i, 1, n)
    scanf("%d", &br[i]);
  
    int mini = 10000000, cro;
    
  FOR(i, 1, n)
  {
    int res = tab[i]+br[i]+t[i];
    
    if(res < mini)
      mini = res, cro = i;
  }
  int mini2 = 10000000;
   
  FOR(i, 1, n)
    if(i != cro)
    {
      int res = tab[i]+br[i]+t[i];
      if(res < mini2)
	mini2 = res;
    }
 
  
  printf("%d\n", mini+mini2);
  
    
  
  
  
  
  
  
  return 0;
}