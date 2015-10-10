#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
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

string a;

int main()
{
  cin >> a;
  int n = a.length();
  
  int sev = 0, fo = 0;
  
  REP(i, n)
  {
    if(a[i] == '7')
      sev++;
    else if(a[i] == '4')
      fo++;
  }
  if(fo >= sev && fo > 0)
    printf("4\n");
  else if(sev > fo && sev > 0)
    printf("7\n");
  else
    printf("-1\n");
  
  return 0;
}