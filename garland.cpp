#include<cstdio>
#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<queue>
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

string a, b;
int res, tab[30], tab2[30];

int main()
{
  cin >> a;
  cin >> b;
  
  REP(i, a.length())
    tab[a[i]-'a']++;
  REP(i, b.length())
    tab2[b[i]-'a']++;
    
  REP(i, 30)
  {
    if(tab2[i] > 0 && !tab[i])
      return printf("-1\n"), 0;
    res += min(tab[i], tab2[i]);
  }
  
  printf("%d\n", res);
  
  return 0;
}