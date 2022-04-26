
// https://www.codechef.com/problems/OMWG



#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;





const int mod1 = (1e9+7);
const long long int mod2 =  1e18 ;

#define mii map<int,int> 
#define msi map<string,int> 
#define musi unordered_map<string,int> 

typedef  long long int lld;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef vector<lld> vi ;
typedef vector<vi> vii ;
typedef vector<vii> viii ;


int main(int argc, char const *argv[])
{
    lld testcase ;
    cin>>testcase ;
    while (testcase--)
    {
        lld n,m ;cin>>n>>m ;
        cout<<(2*m*n)-n-m<<endl;
    }
    
    return 0;
}







