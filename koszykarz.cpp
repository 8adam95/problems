//http://main.edu.pl/pl/archive/ilocamp/2010/kos

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

int main()
{
  int k, w, m;
  scanf("%d %d %d", &k, &w, &m);
  int res = (w-k)/m;
  if(res*m+k < w)
    res++;
  
  printf("%d\n", res);
  

  return 0;
}