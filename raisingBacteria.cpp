#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
#include<set>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I < (N); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int main()
{
  int x;
  scanf("%d", &x);

  int cnt = 0;
  
  while(x)
  {
    if(x%2)
      cnt++;
    x /= 2;
  }
  
  printf("%d\n", cnt);


  return 0;
}