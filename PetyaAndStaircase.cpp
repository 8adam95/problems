#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<list>
#include<queue>
#include<cstring>
using namespace std;
#define FOR(s,x) for ( int i = s ; i < x ; i ++ )
#define FOR2(s,x) for ( long long j = s ; j < x ; j ++ )
#define FOR3(s,x) for ( long long r = s ; r < x ; r ++ )
#define FOI(s,x) for ( long long d = x ; d >= s ; d -- )

using namespace std;
long long n , m , res = 0  , sum = 0  , c = 0 , nm1 , nm2 , nm3;

string s , s1 = "", s3;  
vector <long long> a ;
long long arr[10000001] ;
int main(){
    cin >> n >> m ;
    vector <long long> a (m , 0);

    FOR ( 0 , m ) {
        cin >> a[i] ;
        if ( a[i] == 1 || a[i] == n ){
         cout << "NO" ;
         return 0 ;
        }
    }
    sort(a.begin() , a.end());

    FOR ( 2 , m ){
    
       if ( a[i] - a[i-1] == 1 && a[i-1] - a[i-2] == 1 ) {
         cout << "NO" ;
         return 0 ;
        }
    }
    cout << "YES" ;
}
 