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


int solve(string s1 , string s2 , int n)
{
    vector<int>hash_string1(26,0);
    vector<int>hash_string2(26,0);
    for(auto c:s1)
        hash_string1[c-'a']++ ;

    for(auto c:s2)
        hash_string2[c-'a']++ ;

    int ans1 = 0 ;
    for(int i1 = 0 ; i1<26;i1++)
        ans1 = max(ans1, min(hash_string1[i1],hash_string2[i1]));
    
    return ans1 ;
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
        string s1 ,s2 ;
        cin>>n;
        cin>>s1>>s2 ;
        cout<<solve(s1,s2,n)<<endl;
        // cout<<*(--s1.end())<<endl;

    }
    

    return 0;
}

