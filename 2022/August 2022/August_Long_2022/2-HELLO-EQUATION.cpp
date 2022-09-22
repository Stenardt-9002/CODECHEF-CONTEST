// https://www.codechef.com/AUG221B/problems/HLEQN











#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



typedef vector<int> vi ;
typedef vector<vi> vii ;



typedef vector<ll> vl ;
typedef vector<vl> vll ;

const int mod1 = (1e9+7);
const long long int mod2 =  1e18 ;
#define mii map<int,int> 
#define msi map<string,int> 
#define musi unordered_map<string,int> 




int main(int argc, char const *argv[])
{
    fastIO

    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 


    int testcase ;
    ll x1 ;//, target;
    // testcase=2 ;
    cin>>testcase;
    while (testcase--)
    {
        cin>>x1;
        bool flag_hat = false  ;
        for (ll i1 = 1; i1*i1 <=x1 && !flag_hat; i1++)
        {
            double temp = ((double)(x1-2*i1))/((double)(i1+2));
            ll copare = temp ;
            if(temp!=0 && temp-copare==0)
                flag_hat =  true;
        }
        if(flag_hat)
            cout<<"YES\n";
        else 
            cout<<"NO\n";

    }
    return 0 ;
}






