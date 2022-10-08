// https://www.codechef.com/submit/EVENSPLIT



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
        int size ;
        cin>>size ;
        string n;
        cin>>n ;
        if(size>2)
        {
            int count1 = 0 ,i1=0;
            for(i1 = 0 ; i1<n.size();i1++)
                if(n[i1]=='1')
                    count1++ ;
            string connect = "";
            for (int j1 = 0; j1 < size-count1; j1++)
                connect+="0";
            for (int j1 = 0; j1 < count1; j1++)
                connect+="1";
            n= connect ;
        }
        cout<<n<<endl ;
    
    }
    return 0 ;
}

