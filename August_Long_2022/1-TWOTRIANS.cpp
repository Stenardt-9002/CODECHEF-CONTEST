




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
    int n ;//, target;
    // testcase=2 ;
    cin>>testcase;
    while (testcase--)
    {
        cin>>n;
        vl array_in(n-1,0);
        ll sum1 = 0 ;
        ll max1 = INT_MIN ;
        for(int i1 = 0 ;i1<n-1 ; i1++)
        {
            cin>>array_in[i1];
            sum1+=array_in[i1] ; 
            max1 = max(max1 , array_in[i1]) ;
        }
        // cout<<maxChainLen(array_in,n)<<" "<<maxChainLength1(array_in,n)<<endl;
        // ll sum1 = array_in[0]+array_in[n-2];
        // for(int i1 = 0 ; i1<n-2 ; i1++)
        //     sum1+=max(array_in[i1],array_in[i1+1]);
        
        cout<<sum1+max1<<endl ;

    }
    return 0 ;
}



