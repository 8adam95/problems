#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
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

map<string, int> cnt;
int n;
string a;

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    cin >> a;
    cnt[a]++;
  }
  
  //sort(cnt.begin(), cnt.end());
    
  int b;
  
  scanf("%d", &b);
  
  int c = 0;
  
  /*for(auto it = myMap)
  {
    c++;
    cout << it->first<<"\n";
    if(c >= b)
      break;
  }
  
*/

  return 0;
}