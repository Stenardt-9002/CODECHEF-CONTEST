
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



int main(int argc, char const *argv[])
{
    fastIO
    lld n ;
    cin>>n ;
    lld a ,b ;
    while (n--)
    {
        cin>>a>>b ;
        lld steps = 0;
        while(a!=b)
        {
            if(a>b)
            {
                a = a/2 ; steps++;
            }
            else if(b>a)
            {
                b = b/2 ; steps++;
            }
        }
        cout<<steps<<endl;
    }
    

    return 0;
}
