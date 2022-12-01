// https://www.codechef.com/START61B/problems/PARTPAL




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

bool pallindrome(string input)
{
    string copy1 = input ;
    reverse(input.begin(),input.end());
    return copy1==input;
    // ll i1 =0 ,j1 = input.size()-1;
    // while (input[i1]==input[j1]&& i1<j1)
    // {
    //     i1++;j1-- ;
    // }

    // return !(i1<j1) ;
}
void solve(string input)
{
    ll count1 = 0 ;
    ll n = input.size();
    for (ll i1 = 0; input[i1]; i1++)
        if(input[i1]=='1')
            count1++ ;
    
    if(pallindrome(input) &&(count1==0||count1==n))
        cout<<-1<<endl ;
    else if(pallindrome(input))
    {
        cout<<2<<endl;
        ll count01 = 0 ;
        ll count11 = 0 ,i1=0;
        while (count01==0||count11==0 )
        {
            if(input[i1++]=='0')
                count01++ ;
            else 
                count11++ ;
        }
        if(pallindrome(input.substr(n/2)))
            cout<<(n/2)-1<<" "<<(n/2)+1<<endl;
        else 
            cout<<(n/2)<<" "<<(n/2)<<endl;

        // cout<<count01+count11<<" "<<n-(count01+count11)<<endl;

    }
    else 
    {
        cout<<1<<endl;
        cout<<n<<endl;
    }
}



int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 
    int testcases=1 ;
    cin>>testcases;
    while (testcases--)
    {
        ll n;
        cin>>n;
        string input ;
        cin>> input ;
        solve(input);
        // cout<<*(--s1.end())<<endl;

    }
    

    return 0;
}


