//http://codeforces.com/problemset/problem/560/B

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cstring>
using namespace std;

int a1, a2, a3, b1, b2, b3;

int main()
{
  scanf("%d %d", &a1, &b1);
  scanf("%d %d", &a2, &b2);
  scanf("%d %d", &a3, &b3);
  
  if(a2+a3 <= a1 && max(b2, b3) <= b1) //both are in normal position
    return printf("YES\n"), 0;
  if(b2+b3 <= b1 && max(a2, a3) <= a1)
    return printf("YES\n"), 0;
  
  swap(a2, b2);
  
  if(a2+a3 <= a1 && max(b2, b3) <= b1) //both are in normal position
    return printf("YES\n"), 0;
  if(b2+b3 <= b1 && max(a2, a3) <= a1)
    return printf("YES\n"), 0;
  
  swap(a2, b2);
  swap(a3, b3);
  
  if(a2+a3 <= a1 && max(b2, b3) <= b1) //both are in normal position
    return printf("YES\n"), 0;
  if(b2+b3 <= b1 && max(a2, a3) <= a1)
    return printf("YES\n"), 0;
  
  swap(a2, b2);
  
  if(a2+a3 <= a1 && max(b2, b3) <= b1) //both are in normal position
    return printf("YES\n"), 0;
  if(b2+b3 <= b1 && max(a2, a3) <= a1)
    return printf("YES\n"), 0;
  
  swap(a2, b2);
  swap(a3, b3);
  swap(a1, b1);
  
  if(a2+a3 <= a1 && max(b2, b3) <= b1) //both are in normal position
    return printf("YES\n"), 0;
  if(b2+b3 <= b1 && max(a2, a3) <= a1)
    return printf("YES\n"), 0;
  
  swap(a2, b2);
  
  if(a2+a3 <= a1 && max(b2, b3) <= b1) //both are in normal position
    return printf("YES\n"), 0;
  if(b2+b3 <= b1 && max(a2, a3) <= a1)
    return printf("YES\n"), 0;
  
  swap(a3, b3);
  
  if(a2+a3 <= a1 && max(b2, b3) <= b1) //both are in normal position
    return printf("YES\n"), 0;
  if(b2+b3 <= b1 && max(a2, a3) <= a1)
    return printf("YES\n"), 0;
  
  swap(a2, b2);
  
  if(a2+a3 <= a1 && max(b2, b3) <= b1) //both are in normal position
    return printf("YES\n"), 0;
  if(b2+b3 <= b1 && max(a2, a3) <= a1)
    return printf("YES\n"), 0;
  printf("NO\n"), 0;

  return 0;
}