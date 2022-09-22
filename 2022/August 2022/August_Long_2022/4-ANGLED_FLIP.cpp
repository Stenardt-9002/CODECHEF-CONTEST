// https://www.codechef.com/submit/AFLIP



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
    ll n1,m1 ;//, target;
    // testcase=2 ;
    cin>>testcase;
    while (testcase--)
    {
        cin>>n1>>m1;
        
        vector<vector<ll>> matrix1(n1,vector<ll>(m1,0)) ;
        vector<vector<ll>> matrix2(n1,vector<ll>(m1,0)) ;
        for (ll i1 = 0; i1 < n1; i1++)
            for (ll j1 = 0; j1 < m1; j1++)
                cin>>matrix1[i1][j1];
            
        

        for (ll i1 = 0; i1 < n1; i1++)
            for (ll j1 = 0; j1 < m1; j1++)
                cin>>matrix2[i1][j1];

            if(n1==1||m1==1)
            {
                if(matrix1==matrix2)
                    cout<<"YES\n";
                else 
                    cout<<"NO\n";
            }
            else 
            {
                multiset<ll> sqare1rray1 , sqare2rray1 ,sqare1rray2 , sqare2rray2;
                for (ll i1 = 0; i1 < n1; i1++)
                    for (ll j1 = 0; j1 < m1; j1++)
                        if((i1+j1)%2==0)
                        {
                            sqare1rray1.insert(matrix1[i1][j1]);
                            sqare1rray2.insert(matrix2[i1][j1]);
                        }
                        else 
                        {
                            sqare2rray1.insert(matrix1[i1][j1]);
                            sqare2rray2.insert(matrix2[i1][j1]);
                        }


                if(sqare1rray1 ==sqare1rray2 && sqare2rray1==sqare2rray2)
                    cout<<"YES\n";
                else 
                    cout<<"NO\n";


            }
    }
    return 0 ;
}






