#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cstring>
#include<list>
#include<algorithm>
#include<cmath>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

string S, curans, ans, non;
int i0 = 0, i, j;


int main()
{
  cin >> S;
  bool minus = false;
  int len = S.length();
  if(S[0] == '-')
    minus = true, i0 = 1;

  for(i = i0; i < len; i++)
    if(S[i] == '.')
      break;
    
  int d = -1;
  for(j = i-1; j >= i0; j--)
  {
    if(d%3 == 2)
      curans+=",";
    d += 1;
    curans += S[j];
  }
  if(minus)
    ans += "(";
  ans += "$";
  for(j = curans.length()-1; j >= 0; j--)
    ans += curans[j];
  ans += ".";
  
  d = i+2;
  for(i+=1; i < len; i++)
  {
    non += S[i];
    if(i == d)
      break;
  }
  
  if(non.size() == 0)
    non += "00";
  else if(non.size() == 1)
    non += "0";
  ans += non;
  if(minus) 
    ans += ")";
  cout << ans << "\n";
  
  return 0;
}