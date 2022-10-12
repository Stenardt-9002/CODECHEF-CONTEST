// https://www.codechef.com/START60B/problems/FLIPPAL



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

int countSetBits(string x)
{
    int count = 0;
    int n = x.size();
    int i1= 0;
    while (i1<n)
        count+=(x[i1++]=='1');
    return count;
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
        int n ;
        cin>> n;
        string s1 ;
        cin>>s1 ;
        int bitss =  countSetBits(s1);
        if(bitss%2==0 || (bitss%2==1 && n%2==1))
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
    

    return 0;
}

