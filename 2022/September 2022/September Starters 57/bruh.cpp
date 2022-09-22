// https://www.codechef.com/START57B/problems/DQUERY




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

const long long int mod2 =  1e18 ;


int main(int argc, char const *argv[])
{
    fastIO

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 

    set<pair<int , int>> s1 ;
    s1.insert({1,2});
    s1.insert({7,3});
    s1.insert({3,3});
    
    for(auto x : s1)
        cout<<" "<<x.first<<" "<<x.second ;
    return 0 ;
}

