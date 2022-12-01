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


ll solve(ll n,vector<ll>array1)
{
    if(n==1)
        return 0 ;
    ll ans1 = 0 ;
    ll count1 = 0 ;
    for (auto i1 = 0; i1 < n; i1++)
        if(array1[i1]==1)
            count1+=1;
    
    ll zeros = n-count1 ;
    if(count1<=zeros)    
        return count1 ;
    else
        return zeros+((count1-zeros)%2);

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
        ll n;
        cin>>n;
        vector<ll>array1(n);
        for(auto &x:array1)
            cin>>x ;
        cout<<solve(n,array1)<<endl;
        // cout<<*(--s1.end())<<endl;

    }
    

    return 0;
}

