#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<cstring>
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
int tab[30], odd;

int main()
{
  cin >> a;
  int n = a.length();

  REP(i, n)
    tab[a[i]-'a']++;
    
  REP(i, 26)
    if(tab[i] % 2)
      odd++;
  
  if(odd%2 || odd == 0)
    return printf("First\n"), 0;
  printf("Second\n");

  return 0;
}