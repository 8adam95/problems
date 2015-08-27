//http://main.edu.pl/pl/archive/ilocamp/2010/wie

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 500005;

int hight[MAXN];

int calc(int person, int n)
{
  int L = 1, R = n, C;
  
  if(person < hight[0])
    return 0;
  
  while(L < R)
  {
    C = (L+R)/2;
    while(hight[C] == person && hight[C+1] == hight[C])
      C++;
    
    if(hight[C] < person)
      L = C+1; 
    else if(hight[C] > person)
      R = C;
    
    else if(hight[C] == person && hight[C] != hight[C+1])
      return C;
  }
  if(hight[C] < person)
    return C;
  return C-1;
}

int main()
{
  int n, m, a;
  scanf("%d %d", &n, &m);
  
  FOR(i, 1, n)
    scanf("%d", &a), hight[i] = max(hight[i-1], a);
    
  while(m--)
  {
    int b;
    scanf("%d", &b);
    printf("%d ", calc(b-1, n));
  }
  
  printf("\n");
    
  
  return 0;
}