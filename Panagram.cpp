//http://codeforces.com/problemset/problem/520/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
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

string a;
int n;
bool tab[100];

int main()
{
  scanf("%d", &n);
  cin >> a;
  REP(i, n)
  {
    if((int)a[i] >= 'a')
      tab[a[i]-'a'] = true;
    else
      tab[a[i]-'A'] = true;
  }
  REP(i, 26)
    if(tab[i] == false)
      return printf("NO\n"), 0;
  printf("YES\n");
  
  return 0;
}