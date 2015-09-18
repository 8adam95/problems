//http://codeforces.com/problemset/problem/471/A

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
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

int a[10], tab[11];

int main()
{
  bool vis = false;
  REP(i, 6)
  {
    scanf("%d", a+i);
    tab[a[i]]++;
  }
  sort(a, a+6);
  FOR(i, 1, 9)
  {
    if(tab[i] == 6)
      return printf("Elephant\n"), 0;
    if(tab[i] == 5)
      return printf("Bear\n"), 0;
      
    if(tab[i] == 4)
    {
      vis = true;
      FOR(j, 1, i-1)
	if(tab[j] == 2)
	{
	  printf("Elephant\n");
	  return 0;
	}
      FOR(j, i+1, 9)
	if(tab[j] == 2)
	{
	  printf("Elephant\n");
	  return 0;
	}
      printf("Bear\n");
    }
  }
  if(!vis)
    printf("Alien\n");
    
  return 0;
}