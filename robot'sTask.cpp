#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<list>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 1005;

int n, a[MAXN];
bool ok[MAXN];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &a[i]);
  
  int pos = 0;
  int zebrane = 0;
  int cnt = n;
  int pocz = 2;
  int end = n-1;
    
  while(cnt > 0)
  {
    if(pos % 2 == 0)      
    {
      FOR(i, 1, n)
	if(a[i] <= zebrane && ok[i] == false)
	{
	  ok[i] = true;
	  zebrane++, cnt--;
	}
    }
    else
    {
      FORD(i, n, 1)
	if(a[i] <= zebrane && ok[i] == false)
	{
	  ok[i] = true;
	  zebrane++, cnt--;
	}
    }
    pos++;
  }
  printf("%d\n", pos-1);

  return 0;
}