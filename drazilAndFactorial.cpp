//http://codeforces.com/problemset/problem/515/C

#include<cstdio>
#include<iostream>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<vector>
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

vector<int>v;
int n;
string a;

int main()
{
  scanf("%d", &n);
  cin >> a;
  REP(i, n)
  {
    if(a[i] == '3')
      v.PB(3);
    if(a[i] == '2')
      v.PB(2);
    if(a[i] == '4')
      v.PB(3), v.PB(2), v.PB(2);
    if(a[i] == '5')
      v.PB(5);
    if(a[i] == '6')
      v.PB(5), v.PB(3);
    if(a[i] == '7')
      v.PB(7);
    if(a[i] == '8')
      v.PB(7), v.PB(2), v.PB(2), v.PB(2);
    if(a[i] == '9')
      v.PB(7), v.PB(3), v.PB(3), v.PB(2);
  }
  
  sort(v.begin(), v.end(), greater<int>());
  for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    cout << *it;
  cout << "\n";
}