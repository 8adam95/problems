//http://codeforces.com/problemset/problem/567/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
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

const int MAXN = 100006;

int a[MAXN];

int main()
{
  int n;
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", a+i);
   
  printf("%d %d\n", a[1]-a[0], a[n-1]-a[0]); 
  
    
  FOR(i, 1, n-2)
    printf("%d %d\n", min(a[i]-a[i-1], a[i+1]-a[i]), max(a[i]-a[0], a[n-1]-a[i]));
  
    
  printf("%d %d\n", a[n-1]-a[n-2], a[n-1]-a[0]);


  return 0;
}
