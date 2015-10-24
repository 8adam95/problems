#include<cstdio>
#include<iostream>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
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

int n, k, a;
pair<int, int> B[1005];

vector<int> v;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  scanf("%d %d", &n, &k);
  REP(i, n)
  {
    scanf("%d", &a);
    B[i] = MP(a, i+1);
  }
  sort(B, B+n);
  
  int mini = 0;
  FORD(i, n-1, n-k)
    v.PB(B[i].S), mini = B[i].F;
    
  printf("%d\n", mini);
  
  sort(v.begin(), v.end());
  
  for(int i = 0; i < v.size(); i++)
    printf("%d ", v[i]);
  printf("\n");

  return 0;
}