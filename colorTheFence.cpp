#include<cstdio>
#include<iostream>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, a[11], mini = 1000000;
string str[1000006];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, 9)
  {
    scanf("%d", a+i);
    mini = min(mini, a[i]);
  }

  if(n < mini)
    return printf("-1\n") ,0;
  
  int digit = n/mini;
  while(digit--)
  {
    FORD(i, 9, 1)
      if(n-a[i] >= digit*mini)
      {
	n -= a[i];
	cout << i;
	break;
      }
  }
  printf("\n");
    
  return 0;
}