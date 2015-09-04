//http://main.edu.pl/pl/archive/oig/6/spi

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

string a;
int cnt = 0;

int main()
{
  int n;
  scanf("%d", &n);
  cin >> a;
  
  int pos = 0;
  
  while(pos < n)
  {
    if(a[pos] == 'Z')
    {
      if(a[pos+1] == 'Z')
      {
	if(a[pos+2] == 'Z')
	  pos = pos+3, cnt++;
	else
	  cnt++, pos = pos+2;
      }
      else
	cnt++, pos++;
    }
    else
      pos++;
    
    while(a[pos] == 'W')
      pos++;
  }
  

  printf("%d\n", cnt);
  
    return 0;
}