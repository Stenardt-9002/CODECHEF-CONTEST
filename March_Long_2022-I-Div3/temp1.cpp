
// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {

//     // cout<<(1<<3) ;
//     map<int,int> m1 ;

//     m1.insert(pair<int,int>(1,40));
//     cout<<m1[1]<<endl;;


//     return 0;
// }

#define ll long long
#define dd long double
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define mp make_pair
#define mt make_tuple
#define fo(i , n) for(ll i = 0 ; i < n ; i++)
#define tll tuple<ll ,ll , ll> 
#define pll pair<ll ,ll> 
#include<bits/stdc++.h>
/*#include<iomanip>   
#include<cmath>
#include<cstdio>
#include<utility>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<bitset>*/
dd pi = acos(-1) ;
ll z =  1e18 ;
ll inf = 100000000000000000 ;
ll p1 = 37 ;
ll p2 = 53 ;
ll mod1 =  202976689 ;
ll mod2 =  203034253 ;
ll fact[100] ;
ll gdp(ll a , ll b){return (a - (a%b)) ;}
ll ld(ll a , ll b){if(a < 0) return -1*gdp(abs(a) , b) ; if(a%b == 0) return a ; return (a + (b - a%b)) ;} // least number >=a divisible by b
ll gd(ll a , ll b){if(a < 0) return(-1 * ld(abs(a) , b)) ;    return (a - (a%b)) ;} // greatest number <= a divisible by b
ll gcd(ll a , ll b){ if(b > a) return gcd(b , a) ; if(b == 0) return a ; return gcd(b , a%b) ;}
ll e_gcd(ll a , ll b , ll &x , ll &y){ if(b > a) return e_gcd(b , a , y , x) ; if(b == 0){x = 1 ; y = 0 ; return a ;}
ll x1 , y1 , g; g = e_gcd(b , a%b , x1 , y1) ; x = y1 ; y = (x1 - ((a/b) * y1)) ; return g ;}
ll power(ll a ,ll b , ll p){if(b == 0) return 1 ; ll c = power(a , b/2 , p) ; if(b%2 == 0) return ((c*c)%p) ; else return ((((c*c)%p)*a)%p) ;}
ll inverse(ll a ,ll n){return power(a , n-2 , n) ;}
ll max(ll a , ll b){if(a > b) return a ; return b ;}
ll min(ll a , ll b){if(a < b) return a ; return b ;}
ll left(ll i){return ((2*i)+1) ;}
ll right(ll i){return ((2*i) + 2) ;}
ll ncr(ll n , ll r){if(n < r|| (n < 0) || (r < 0)) return 0 ; return ((((fact[n] * inverse(fact[r] , z)) % z) * inverse(fact[n-r] , z)) % z);}
void swap(ll&a , ll&b){ll c = a ; a = b ; b = c ; return ;}
//ios_base::sync_with_stdio(0);
//cin.tie(0); cout.tie(0);
using namespace std ;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// ordered_set s ; s.order_of_key(val)  no. of elements strictly less than val
// s.find_by_order(i)  itertor to ith element (0 indexed)
//__builtin_popcount(n) -> returns number of set bits in n
ll seed;
mt19937 rnd(seed=chrono::steady_clock::now().time_since_epoch().count()); // include bits

ll p[62], f[62];


void get_ans(ll k, ll n, ll &ans)
{
    if(n == 0)
        return ;

    ll half_size = p[n-1]-1 ;
    k-- ;

    // cout << endl ;
    // cout << "k = " << k << " n = " << n << endl ;
    // cout << "half_size = " << half_size << endl ;

    if(k == 0)
        return ;

    if(k <= half_size)
    {
        get_ans(k , n-1 , ans) ;
    }
    else
    {
        ans += f[n-2] ;
        ans += (k - half_size) ;
        ans %= z ;

    //cout << "add1 = " << f[n-2] << " add2 = " << (k - half_size) << " ans = " << ans << endl ;
        get_ans(k - half_size , n-1 , ans) ;
    }

    return ;
}
 
void solve()
{
    ll n, k ;
    cin >> n >> k ;
    ll ans = 0 ;
    ans += k ;
    ans %= z ;

    get_ans(k, n, ans) ;
    cout << ans << '\n' ;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 
    ll t = 1;
    cin >> t ;

    p[0] = 1 ;
    for(ll i = 1 ; i < 62 ; i++)
        p[i] = (p[i-1]*2)%z ;

    f[0] = 0 ;
    for(ll i = 1 ; i < 62 ; i++)
    {
        f[i] = (p[i-1]*i)%z ;
        f[i] = (f[i-1] + f[i])%z ;
    }

    while(t--)
    {
        solve() ;
    }
    
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
 
    return 0;
}

