#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<list>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

string s, t;

int tab1[105], tab2[105];

int main()
{
  cin >> s >> t;

  int n1 = s.length();
  int n2 = t.length();

  REP(i, n1)
    tab1[s[i]-'a']++;
    
  REP(i, n2)
    tab2[t[i]-'a']++;
  
    
  bool a = true, b = true;
  
  REP(i, 26)
    if(tab1[i] != tab2[i])
      a = false;
    
  int j = 0;
  REP(i, n2)
  {
    while(j <= n1 && s[j] != t[i])
      j++;
    if(j > n1)
      b = false;
    j++;
  }
  if(a)
    return printf("array\n"), 0;
  if(b)
    return printf("automaton\n"), 0;
  
  a = true;
  REP(i, 26)
    if(tab1[i] < tab2[i])
      a = false;
    
  if(a)
    printf("both\n");
  else
    printf("need tree\n");
  
  
  
  return 0;
}