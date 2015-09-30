#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<list>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int k, b[30], maks = -1, sum;
string a;

int main()
{
  cin >> a;
  scanf("%d", &k);
  REP(i, 26)
  {
    scanf("%d", &b[i]);
    if(b[i] > maks)
      maks = b[i];
  }
  
  REP(i, a.length())
    sum += (i+1)*b[a[i]-'a'];

  FOR(i, a.length(), a.length()+k-1)
    sum += (i+1)*maks;
   
   
  printf("%d\n", sum);


  return 0;
}