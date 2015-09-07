//http://codeforces.com/problemset/problem/467/B
#include<cstdio>
#include<iostream>
using namespace std;


int n, m, k, a[1005], res = 0;


int main()
{
  scanf("%d %d %d", &n, &m, &k);
  for(int i = 1; i <= m+1; i++)
    scanf("%d", &a[i]);
  
  for(int i = 1; i <= m; i++)
    if(__builtin_popcount(a[m+1]^a[i]) <= k)
      res++;
    
   printf("%d\n", res);
    
    
    return 0;
}