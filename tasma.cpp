//http://main.edu.pl/en/archive/ilocamp/2010/tas

#include<cstdio>
#include<iostream>
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

const int MAXN = 1000006;
int a[MAXN], result = 1000000000, res[MAXN];

int main()
{
  int n;
  scanf("%d", &n);
  FOR(i, 1, n)
    scanf("%d", &a[i]), res[i] = res[i-1] + a[i];

    
  FOR(i, 1, n-1)
    result = min(result, abs((res[n]-res[i])-res[i]));
    
  printf("%d\n", result);  
  
  return 0;
}