//http://main.edu.pl/en/archive/ilocamp/2010/sil

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

int main()
{
  int a, b, n;
  scanf("%d %d %d", &a, &b, &n);
  int  weight = n/a;
  weight += n/b;
  weight -= n/((a*b)/__gcd(a, b));
    
  printf("%d\n", weight);
  
  return 0;
}