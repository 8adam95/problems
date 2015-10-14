#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
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

int n, k, tab[100006];

int main()
{
  scanf("%d %d", &n, &k);
  REP(i, n)
  {
    int a;
    scanf("%d", &a);
    tab[i%k] += a;
  }
  
  int mini = 1000000000;
  int res = 0;
  
  REP(i, k)
    if(mini > tab[i])
      mini = tab[i], res = i;
    
    printf("%d\n", res+1);


  return 0;
}