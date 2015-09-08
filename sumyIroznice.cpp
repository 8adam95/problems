//http://main.edu.pl/pl/archive/ilocamp/2011/sir

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

int n;
ll res;

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    int a;
    scanf("%d", &a);
    if(a < 0)
      res += (n-1);
    
  }
  
  
  return 0;
}