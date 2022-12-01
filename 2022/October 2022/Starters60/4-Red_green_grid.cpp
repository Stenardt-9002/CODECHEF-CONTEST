// https://www.codechef.com/START60B/problems/REDGREEN








#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


const int mod1 = (1e9+7);
const int MOD1 = 1000000007;

const int MOD2 = 998244353 ;

int power(long long x, unsigned int y, int p)
{
    int res = 1;   
    x = x % p;
    if (x == 0) return 0; 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
 


long long moduloMultiplication(long long a, long long b, long long mod)
{
    long long res = 0;
    a %= mod;
 
    while (b) {
 
        if (b & 1)
            res = (res + a) % mod;

        a = (2 * a) % mod;
        b >>= 1; // b = b / 2
    }
    return res;
}

long long int gcdExtended(long long int a, long long int b, long long int* x,long long int* y);

long long int modInverse(long long int b, long long int m)
{
    long long int x, y; // used in extended GCD algorithm
    long long int g = gcdExtended(b, m, &x, &y);

    if (g != 1)
        return -1;

    return (x % m + m) % m;
}
 
long long int gcdExtended(long long int a, long long int b,long long int* x,long long int* y)
{
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
    long long int x1, y1;
    long long int gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}
 
// Function to compute a/b under modulo m
long long int modDivide(long long int a, long long int b,long long int m)
{
    a = a % m;
    long long int inv = modInverse(b, m);
    if (inv == -1)
        return 0;
    else
        return (inv * a) % m;
}
 
// Function to calculate nCr % p
int nCr(int n, int r, int p)
{
    if (r > n)
        return 0;
    if (r > n - r)
        r = n - r;
    long long int x = 1;
    for (int i = 1; i <= r; i++) {
        x = moduloMultiplication(x, (n + 1 - i), p);
        x = modDivide(x, i, p);
    }
    return x;
}

int solve(int n , int m)
{
    if((n+m-1)%2==1 )
        return 0 ;
    else 
    {
        int firstpart = nCr(n+m-2,n-1,MOD2);
        int secondpart = nCr(n+m-1,(n+m-1)/2,MOD2);
        int ans1 = power(2,(n*m-(n+m-1)),MOD2) ;
        // for (int i1 = 0; i1 <(n*m-(n+m-1)) ; i1++)
        // {
        //     ans1*=2 ;

        // }
        ans1 = (ans1*secondpart)%MOD2;
        ans1 = (ans1*firstpart)%MOD2;
        return ans1 ;
    }

}



int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 
    int testcases=1 ;
    cin>>testcases;
    while (testcases--)
    {
        int n ,m;
        cin>> n>>m;
        //calcualte n+m-2 C n-1     
        cout<<solve(n,m)<<endl ;//odd path cant reach home

    }   
    

    return 0;
}

