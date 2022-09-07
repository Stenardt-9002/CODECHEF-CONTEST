
#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;


typedef vector<int> vi ;
typedef vector<vi> vii ;

const int mod1 = (1e9+7);
const long long int mod2 =  1e18 ;
#define mii map<int,int> 
#define msi map<string,int> 
#define musi unordered_map<string,int> 


typedef  long long int lld;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


vector<lld> dp1(54,0),dp2(54,0);


void recursaive_fun(lld k,lld n ,lld &ans1)
{
    if(n==0)
        return ;


    lld half_size = dp1[n-1]-1;
    k--;

    if (k==0)
        return ;
    
    if (k<=half_size)
        recursaive_fun(k,n-1,ans1);
    
    else 
    {
        ans1+=dp2[n-2] ; 
        ans1+=(k-half_size);
        ans1%=mod2;
        recursaive_fun(k-half_size,n-1,ans1);
    }


    return ;
}



int main(int argc, char const *argv[])
{
    fastIO
    int testcase=1 ;
    long long int n;
    long long int k ;
    long long int ans1 = 0;
    cin>>testcase ;


    dp1[0]=1 ;
    for (int i1 = 1; i1 < 54; i1++)
    {
        dp1[i1] = (dp1[i1-1]*2)%mod2;
    }
    dp2[0] = 0;
    for (int i1 = 1; i1 < 54; i1++)
    {
        dp2[i1] = (dp1[i1-1]*i1)%mod2;
        dp2[i1] = (dp2[i1-1]+dp2[i1])%mod2;
    }
    



    while (testcase--)
    {
        ans1 = 0;
        cin>>n>>k;
        ans1+=k;


        recursaive_fun(k,n,ans1);
        cout<<ans1<<endl;

    }
    
    return 0;
}












