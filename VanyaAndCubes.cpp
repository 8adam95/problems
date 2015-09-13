//http://codeforces.com/problemset/problem/492/A


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

int tab[155], n;

int main()
{
  for(int i = 1; i <= 150; i++)
    tab[i] = tab[i-1]+i;
  
  scanf("%d", &n);
  int sum = 0;
  for(int i = 1; i <= 150; i++)
  {
    sum += tab[i];
    if(sum > n)
     return printf("%d\n", i-1), 0;
  }
  
  return 0;
}