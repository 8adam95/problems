//http://codeforces.com/problemset/problem/466/A


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

int sum;

int main()
{
  int n, m, a, b;
  scanf("%d %d %d %d", &n, &m, &a, &b);
  if(m*a <= b)
    printf("%d\n", n*a);
  else
    printf("%d\n", (n/m)*b+min((n%m)*a, b));
  
  return 0;
}