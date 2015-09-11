//http://codeforces.com/problemset/problem/443/A

#include<cstdio>
#include<iostream>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<vector>
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

string a;
bool tab[50];
int cnt;

int main()
{
  while(cin >> a)
  {
    if(a.size() == 2 && a[0] == '{' && a[1] == '}')
      continue;
    
    if(a.size() == 3)
      tab[a[1]-'a'] = true;
    if(a.size() == 2)
      tab[a[0]-'a'] = true;
  }
  
  FOR(i, 0, 33)
    if(tab[i])
      cnt++;
    
  printf("%d\n", cnt);
    
    
  return 0;
}