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
int n;
vector<int> v1, v2, v3, v4;

// 0 1 2
// 0 1
// 0 2 
// 1 2 

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
  {
    int a;
    scanf("%d", &a);
    if(a == 0)
    {
      if(v1.size() == 0)
      {
	v1.PB(0);
	v2.PB(0);
	v3.PB(0);
      }
    }
    if(a == 1)
    {
      if(v1.size() == 1)
      {
	v1.PB(1);
	v2.PB(1);
      }
      if(v4.size() == 0)
	v4.PB(1);
    }
    if(a == 2)
    {
      if(v1.size() == 2)
	v1.PB(2);
      if(v3.size() == 1)
	v3.PB(2);
      if(v4.size() == 1)
	v4.PB(2);
    }
  }
  printf("%d\n", max((int)v1.size(), max((int)v2.size(), max((int)v3.size(), (int)v4.size()))));
    
  return 0;
}