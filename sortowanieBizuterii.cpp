//http://main.edu.pl/pl/archive/oig/1/sor

#include<cstdio>
#include<iostream>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

string ciag[200];
char tmp[250];
int n;
pair<int, string> B[250];

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%s", tmp);
    ciag[i] = tmp;
    int d = ciag[i].length();
    B[i] = MP(d, ciag[i]);
  }
  sort(B, B+n);
  
  REP(i, n)
  cout << B[i].S << "\n";
  
  return 0;
}