




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
        int n ;
        cin>> n ;
        string input;
        cin>>input ;
        string numbers = "";
        int plus1 = 0 ;
        int sub1 = 0;
        // int n = input.size();
        for (int i1 = 0; i1 < n; i1++)
        {
            if(input[i1]=='+')
                plus1++ ;
            else if(input[i1]=='-')
                sub1++ ;
            else 
                numbers+=input[i1];
        }
        sort(numbers.begin(), numbers.end() , greater<int>());
        // cout<<numbers<<endl  ;
        int numofop = plus1+sub1 ;
        int sizen = numbers.size();
        string ans1 = "";
        int i1 = 0 ;
        for (i1 = 0; i1 < sizen-numofop; i1++)
            ans1+=numbers[i1];

        for (;i1 < sizen; i1++)
        {
            if(plus1>0)
                ans1+='+' , plus1--;
            else if(sub1>0)
                ans1+='-' ,sub1-- ;
            ans1+=numbers[i1];
        }
        cout<<ans1<<endl ;

        
        
    }
    return 0 ;
}

