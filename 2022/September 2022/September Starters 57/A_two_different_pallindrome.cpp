
// https://www.codechef.com/START57B/problems/TWODIFFPALIN
// https://discuss.codechef.com/t/twodiffpalin-editorial/103305


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


    int testcase ;
    
    // testcase=2 ;
    cin>>testcase;
    while (testcase--)
    {
        int a1 ,b0 ;
        cin>>a1>>b0 ;

        if((a1%2==1&&b0%2==1)||(a1==1&& b0%2==0)||(b0==1&& a1%2==0))
            cout<<"No"<<endl ;
        else 
            cout<<"Yes"<<endl ;




    }
    return 0 ;
}

