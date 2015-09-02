//http://main.edu.pl/pl/archive/ilocamp/2010/wks

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
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
  FOR(i, 1, n)
    scanf("%d", a+i);

  FOR(i, 1, n)
    if(a[i] == 0)
    {
      FOR(j, i+1, n)
      {
	if(a[j] == 1)
	{
	  FOR(k, j+1, n)
	    if(a[k] == 2)
	      return printf("3\n"), 0;
	  return printf("2\n"), 0;
	}
      }
      FOR(j, i+1, n)
	if(a[j] == 2)
	  return printf("2\n"), 0;
    }
  FOR(i, 1, n)
  {
    if(a[i] == 1)
      FOR(j, i+1, n)
	if(a[j] == 2)
	  return printf("2\n"), 0;
  }
  printf("1\n");
 
    
  return 0;
}