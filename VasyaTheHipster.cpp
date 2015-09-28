#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<list>
using namespace std;

#define REP(I, N) for(int I = 0; I , (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d ", min(a, b));
  int c = min(a,b);
  a-= c;
  b -= c;
  if(a)
    printf("%d\n", a/2);
  else if(b)
    printf("%d\n", b/2);
  else
    printf("0\n");


  return 0;
}