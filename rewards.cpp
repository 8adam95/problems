//http://codeforces.com/problemset/problem/448/A


#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<cmath>
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

int cups, med;

int main()
{
  int a;
  REP(i, 3)
    scanf("%d", &a), cups += a;
    
  REP(i, 3)
    scanf("%d", &a), med += a;
  
  scanf("%d", &a);
  
  a -= ceil(cups/5.0);
  a -= ceil(med/10.0);
  
  if(a >= 0)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}