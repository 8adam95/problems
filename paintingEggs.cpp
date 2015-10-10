#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
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

vector<char>res;
int sumA, sumB, a, b, n;

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d %d", &a, &b);
    if(abs(sumA+a-sumB) <= 500)
      sumA += a, res.PB('A');
    else
      sumB += b, res.PB('G');
  }
  if(abs(sumA-sumB) > 500)
    return printf("-1\n"), 0;
  for(vector<char>::iterator it = res.begin(); it!=res.end(); it++)
    cout << *it;
    
  printf("\n");
  
}