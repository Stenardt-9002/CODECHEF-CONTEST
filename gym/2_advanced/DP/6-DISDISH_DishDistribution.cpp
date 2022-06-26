
// https://www.codechef.com/problems/DISHDIS

#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;


typedef vector<int> vi ;
typedef vector<vi> vii ;
typedef vector<vii> viii ;


const int mod1 = (1e9+7);
const long long int mod2 =  1e18 ;

#define mii map<int,int> 
#define msi map<string,int> 
#define musi unordered_map<string,int> 

typedef  long long int lld;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(int argc, char const *argv[])
{
    fastIO
    lld testcases  ;
    cin>>testcases ;
    lld n,m ;
    while (testcases--)
    {
        cin>>n>>m ;//cooks,dishes
        vector<vector<lld>> input1(m,vector<lld>(2,0));
        for (lld i1 = 0; i1 < m; i1++)
            cin>>input1[i1][0]>>input1[i1][1];
        //dp[i,j] = sum(dp1[i-1,j-k])k from x[i] to y[i]
        vector<vector<lld>> dp1(m+1,vector<lld>(n+1,0));

        dp1[0][0] = 1;
        for (lld i1 = 0; i1 <m; i1++)
            for (lld j1 = 0; j1 <=n; j1++)
                for (lld k1 = input1[i1][0]; k1<=input1[i1][1] ; k1++)
                    if(j1>=k1)
                    {
                        dp1[i1+1][j1]+=dp1[i1][j1-k1];
                        dp1[i1+1][j1] = dp1[i1+1][j1]%mod1;
                    }
        
        if(dp1[m][n]<0)
            cout<<dp1[m][n]+mod1<<endl;
        else 
            cout<<dp1[m][n]<<endl;
            
    }
    
    return 0;
}