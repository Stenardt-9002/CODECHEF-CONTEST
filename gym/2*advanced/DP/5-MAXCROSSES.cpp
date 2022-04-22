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
    int n  ;
    cin>>n ;

    vector<string> input1(n);
    viii dp1(8,vii(n+2,vi(n+2,0)));
    lld i1 , j1;
    for ( i1 = 0; i1 <n; i1++)
        cin>>input1[i1]    ;

    for (i1 = 0;i1 <n;i1++)
        for ( j1 = 0; j1 <n; j1++)
            if(input1[i1][j1]!='.')
            {
                dp1[0][i1+1][j1+1] = dp1[0][i1][j1] +1;
                dp1[1][i1+1][j1+1] = dp1[1][i1][j1+1] +1;
                dp1[2][i1+1][j1+1] = dp1[2][i1][j1+2] +1;
                dp1[7][i1+1][j1+1] = dp1[7][i1+1][j1] +1;
            }
    for (i1 = n-1;i1 >=0;i1--)
        for ( j1 = n-1; j1 >=0; j1--)
            if(input1[i1][j1]!='.')
            {
                dp1[3][i1+1][j1+1] = dp1[3][i1+1][j1+2] +1;
                dp1[4][i1+1][j1+1] = dp1[4][i1+2][j1+2] +1;
                dp1[5][i1+1][j1+1] = dp1[5][i1+2][j1+1] +1;
                dp1[6][i1+1][j1+1] = dp1[6][i1+2][j1] +1;
            }

    for (i1 = 0;i1 <n;i1++)
    {
        for ( j1 = 0; j1 <n; j1++)
        {
            if(input1[i1][j1]=='.')
                cout<<0<<" ";
            else 
                cout<<max({dp1[0][i1+1][j1+1]+dp1[4][i1+2][j1+2] ,dp1[1][i1+1][j1+1]+dp1[5][i1+2][j1+1],dp1[2][i1+1][j1+1]+dp1[6][i1+2][j1],dp1[3][i1+1][j1+1]+dp1[7][i1+1][j1]  })<<" ";
                // cout<<max({dp1[0][i1][j1]+dp1[4][i1+1][j1+1] ,dp1[1][i1][j1]+dp1[5][i1+1][j1],dp1[2][i1][j1]+dp1[6][i1+1][j1-1],dp1[3][i1][j1]+dp1[7][i1][j1-1]  })<<" ";
        }
        cout<<endl;
    }

    return 0;
}


