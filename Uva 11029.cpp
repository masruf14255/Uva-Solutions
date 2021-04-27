#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

Long BigMod(Long b , Long p , Long m){
    if( p == 0 ) return 1LL ;
    if( p == 1 ) return b%m ;
    Long ret = 1 ;
    while( p > 0 ) {
        if( p & 1 ) ret = ( ret * b ) % m ;
        p >>= 1 ;
        b = ( b * b ) % m ;
    }
    return ret ;
}
int main()
{
    int t ;
    cin>>t;
    while( t-- )
    {
        int n,k;
        cin>>n>>k;

        int trail = BigMod(n,k,1000);
        double p = k * log10(n);
        double ex = p - floor(p);
        double lead = pow(10,ex)*100.00;
        printf("%03d...%03d\n",(int)lead,trail);
    }
}

