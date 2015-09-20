//http://codeforces.com/problemset/problem/499/B


#include<cstdio>
#include<iostream>
#include<set>
#include<map>
#include<vector>
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

const int MAXM = 3003;

string a[MAXM], b[MAXM], str;
int tab0[MAXM], tab1[MAXM];

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  REP(i, m)
  {
    cin >> a[i] >> b[i];
    tab0[i] = a[i].length(), tab1[i] = b[i].length();
  }
  while(n--)
  {
    cin >> str;
    REP(i, m)
      if(a[i] == str)
      {
	if(tab0[i] > tab1[i])
	  cout << b[i];
	else
	  cout << str;
	cout << " ";
	
      }
  }
  printf("\n");
  
  
  return 0;
}