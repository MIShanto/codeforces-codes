#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll a, b, c, d, e, f,dp[1000000];

ll fn( ll n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1)
        return dp[n];
    else
        {

            dp[n] = ( fn(n-1)%10000007 + fn(n-2) %10000007+ fn(n-3)%10000007 + fn(n-4)%10000007 + fn(n-5)%10000007 + fn(n-6)%10000007 );
            return dp[n];

        }
}

int main() {
    ll n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
            memset(dp,-1,1000000);
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
