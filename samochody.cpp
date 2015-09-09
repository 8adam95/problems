//http://main.edu.pl/pl/archive/ilocamp/2011/sam
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<vector>
#include<set>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, , tab[1000006], res[1000006];
ll result;

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &tab[i]);
    
  FORD(i, n, 1)
  {
    if(tab[i] == 1)
      res[i] = res[i+1]+1;
    else
      res[i] = res[i+1];
  }
  
  FOR(i, 1, n)
    if(tab[i] == 0)
      result += res[i+1];
  
    
  printf("%lld\n", result);
  
  return 0;
}