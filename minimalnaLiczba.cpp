//http://main.edu.pl/pl/archive/oig/2/min

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

const int MAXN = 1000006;
long long a, k;
int n, he = 0;

vector<long long> B;

int main()
{
  scanf("%d %lld", &n, &k);
  REP(i, n)
  {
    ll a;
    scanf("%lld", &a);
    if(a % k == 0)
      B.push_back(a), he++;
  }
    
  sort(B.begin(), B.end());
  
  REP(i, he)
    if((ll)(i+1)*k != B[i]) 
      return printf("%lld\n", (ll)(i+1)*k), 0;
    
  printf("%lld\n", (he+1)*k);
  
  return 0;
}