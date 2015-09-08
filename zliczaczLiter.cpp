#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int d, n, tab[255];
string ciag;


int main()
{
  scanf("%d", &n);
  n++;
  
  FOR(i, 0, 250)
    tab[i] = 0;
    
  REP(i, n)
  {
    getline(cin, ciag);
    int d = ciag.length();
    REP(j, d)
      tab[(int)ciag[j]]++;
  }
  
  FOR(i, 91, 250)
    if(tab[i] != 0 && i != 32)
      printf("%c %d\n", (char)(i), tab[i]);
    
  FOR(i, 1, 90)
    if(tab[i] != 0 && i != 32)
      printf("%c %d\n", (char)(i), tab[i]);
  
  return 0;
}